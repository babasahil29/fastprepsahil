// Constants
const SCROLL_THRESHOLD = 50;
const MOBILE_BREAKPOINT = 768;

// Fade-in effect
function handleFadeIn(entries) {
    entries.forEach((entry) => {
        if (entry.isIntersecting) {
            entry.target.classList.add('visible');
            entry.target.intersectionObserver.unobserve(entry.target);
        }
    });
}

// Initialize fade-in effect
document.querySelectorAll('.fade-in').forEach((element) => {
    const observer = new IntersectionObserver(handleFadeIn, {
        root: null,
        rootMargin: '0px',
        threshold: 0.1,
    });
    observer.observe(element);
});

// Dropdown functionality
const dropdownButton = document.getElementById('dropdownBtn');
const languageDropdown = document.getElementById('languageDropdown');

function toggleLanguageDropdown() {
    languageDropdown.classList.toggle('show');
    positionLanguageDropdown();
}

dropdownButton.addEventListener('click', (event) => {
    event.stopPropagation();
    toggleLanguageDropdown();
});

// Search functionality
const searchButton = document.getElementById('search-btn');

searchButton.addEventListener('click', () => {
    const searchTerm = document.getElementById('search').value;
    alert(`Searching for: ${searchTerm}`);
});

// Start Now button
document.addEventListener('DOMContentLoaded', () => {
    const startNowButton = document.getElementById('startNowBtn');
    startNowButton.addEventListener('click', () => {
        dropdownButton.scrollIntoView({ behavior: 'smooth' });
        setTimeout(() => {
            toggleLanguageDropdown();
        }, 500); // Delay to allow smooth scrolling to complete
    });
});

// Navigation functionality
function navigateToLanguage(language) {
    if (language) {
        window.location.href = language.toLowerCase() + '.html';
    } else {
        console.error('Language not found');
    }
}

// Add event listeners to language links
document.querySelectorAll('#languageDropdown a').forEach((link) => {
    link.addEventListener('click', (event) => {
        event.preventDefault();
        navigateToLanguage(event.target.textContent);
    });
});

// Header scrolling effect
window.addEventListener('scroll', () => {
    const header = document.querySelector('header');
    if (window.scrollY > SCROLL_THRESHOLD) {
        header.classList.add('scrolled');
    } else {
        header.classList.remove('scrolled');
    }
});

// Mobile menu functionality
const mobileMenuButton = document.querySelector('.mobile-menu-btn');
const navigationLinks = document.querySelector('.nav-links');
const floatingActionButton = document.querySelector('.fab-language');

mobileMenuButton.addEventListener('click', () => {
    navigationLinks.classList.toggle('active');
});

// Close mobile menu when a link is clicked
navigationLinks.querySelectorAll('a').forEach((link) => {
    link.addEventListener('click', () => {
        navigationLinks.classList.remove('active');
    });
});

// Close mobile menu when clicking outside
document.addEventListener('click', (event) => {
    if (!event.target.closest('.mobile-menu-btn') && !event.target.closest('.nav-links')) {
        navigationLinks.classList.remove('active');
    }
});
document.addEventListener('click', (event) => {
    if (!event.target.matches('#dropdownBtn') && !event.target.closest('#languageDropdown')) {
        languageDropdown.classList.remove('show');
    }
});

// Floating action button functionality
floatingActionButton.addEventListener('click', () => {
    toggleLanguageDropdown();
});

// Update language dropdown positioning for mobile
function positionLanguageDropdown() {
    const isMobile = window.innerWidth <= MOBILE_BREAKPOINT;
    const dropdown = document.getElementById('languageDropdown');

    if (isMobile) {
        const fabRect = floatingActionButton.getBoundingClientRect();
        dropdown.style.position = 'fixed';
        dropdown.style.bottom = `${window.innerHeight - fabRect.top + 10}px`;
        dropdown.style.right = ' 10px';
    } else {
        dropdown.style.position = '';
        dropdown.style.bottom = '';
        dropdown.style.right = '';
    }
}

// Update language dropdown positioning on window resize
window.addEventListener('resize', () => {
    positionLanguageDropdown();
});
