<!-- Snapshot Section -->
<div id="snapshot" class="tab-content">
    <h3 class="text-2xl font-bold mb-8 text-blue-600">Language Snapshot</h3>
    <div id="snapshot-content" class="space-y-8">
      <!-- Overview Section -->
      <section>
        <h4 class="text-xl font-semibold mb-4">Overview</h4>
        <p>The MERN stack is a popular full-stack JavaScript framework used for building modern web applications. MERN stands for:</p>
        <ul class="list-disc pl-6 space-y-2">
          <li>
            <span class="font-medium">M:</span> MongoDB (Database)
          </li>
          <li>
            <span class="font-medium">E:</span> Express.js (Back-end framework)
          </li>
          <li>
            <span class="font-medium">R:</span> React.js (Front-end library)
          </li>
          <li>
            <span class="font-medium">N:</span> Node.js (Server environment)
          </li>
        </ul>
        <p>This stack allows developers to use JavaScript for both front-end and back-end development, creating efficient, scalable, and high-performance applications.</p>
      </section>
  
      <!-- MongoDB Section -->
      <section>
        <h4 class="text-xl font-semibold mb-4">MongoDB (Database)</h4>
        <p>MongoDB is a NoSQL database that stores data in flexible, JSON-like documents. It’s highly scalable and well-suited for handling large amounts of data.</p>
        <h5 class="text-lg font-semibold mb-2">Key Features:</h5>
        <ul class="list-disc pl-6 space-y-2">
          <li>
            <span class="font-medium">Document-oriented:</span> Stores data in JSON-like BSON format.
          </li>
          <li>
            <span class="font-medium">Flexible schema:</span> Dynamic data structure without rigid schemas.
          </li>
          <li>
            <span class="font-medium">Scalable:</span> Horizontal scaling with sharding.
          </li>
          <li>
            <span class="font-medium">High Availability:</span> Data replication across multiple servers.
          </li>
        </ul>
        <h5 class="text-lg font-semibold mb-2">Snapshot Example:</h5>
        <pre class="bg-gray-100 p-4 rounded-md"><code>
          db.users.insertOne({ name: "Sahil", age: 22, course: "MERN Stack" });
          db.users.find({ name: "Sahil" });
          db.users.updateOne({ name: "Sahil" }, { $set: { age: 23 } });
        </code></pre>
      </section>
  
      <!-- Express.js Section -->
      <section>
        <h4 class="text-xl font-semibold mb-4">Express.js (Back-end framework)</h4>
        <p>Express.js is a lightweight back-end web application framework for Node.js. It’s used to build APIs and handle HTTP requests.</p>
        <h5 class="text-lg font-semibold mb-2">Key Features:</h5>
        <ul class="list-disc pl-6 space-y-2">
          <li>
            <span class="font-medium">Minimalist:</span> Simplifies working with Node.js and HTTP requests.
          </li>
          <li>
            <span class="font-medium">Middleware:</span> Uses middleware to process requests.
          </li>
          <li>
            <span class="font-medium">Routing:</span> Manages routes to handle requests and send responses.
          </li>
          <li>
            <span class="font-medium">Fast:</span> Lightweight with no unnecessary bloat.
          </li>
        </ul>
        <h5 class="text-lg font-semibold mb-2">Snapshot Example:</h5>
        <pre class="bg-gray-100 p-4 rounded-md"><code>
          const express = require("express");
          const app = express();
  
          app.get("/", (req, res) => {
            res.send("Hello, MERN Stack! ");
          });
  
          app.listen(3000, () => {
            console.log("Server running on port 3000");
          });
  
          app.post("/user", (req, res) => {
            const user = req.body;
            res.send(`User ${user.name} added successfully!`);
          });
        </code></pre>
      </section>
  
      <!-- React.js Section -->
      <section>
        <h4 class="text-xl font-semibold mb-4">React.js (Front-end library)</h4>
        <p>React.js is a powerful JavaScript library for building user interfaces.
            <p>React.js is a powerful JavaScript library for building user interfaces. It allows developers to create reusable UI components.</p>
            <h5 class="text-lg font-semibold mb-2">Key Features :</h5>
            <ul class="list-disc pl-6 space-y-2">
              <li>
                <span class="font-medium">Component-based:</span> Build encapsulated components that manage their own state.
              </li>
              <li>
                <span class="font-medium">Virtual DOM:</span> Efficiently updates only changed parts of the UI.
              </li>
              <li>
                <span class="font-medium">Unidirectional data flow:</span> Ensures data flows in one direction for predictable behavior.
              </li>
              <li>
                <span class="font-medium">Hooks:</span> Provide state and lifecycle management in function components.
              </li>
            </ul>
            <h5 class="text-lg font-semibold mb-2">Snapshot Example:</h5>
            <pre class="bg-gray-100 p-4 rounded-md"><code>
              import React from 'react';
      
              function App() {
                return (
                  &lt;div&gt;
                    &lt;h1&gt;Hello, MERN Stack!&lt;/h1&gt;
                  &lt;/div&gt;
                );
              }
      
              export default App;
      
              import React, { useState } from 'react';
      
              function App() {
                const [count, setCount] = useState(0);
      
                return (
                  &lt;div&gt;
                    &lt;p&gt;Count: {count}&lt;/p&gt;
                    &lt;button onClick={() =&gt; setCount(count + 1)}&gt;Increment&lt;/button&gt;
                  &lt;/div&gt;
                );
              }
      
              export default App;
      
              import React, { useEffect, useState } from 'react';
              import axios from 'axios';
      
              function App() {
                const [data, setData] = useState([]);
      
                useEffect(() =&gt; {
                  axios.get("/api/data").then(response =&gt; setData(response.data));
                }, []);
      
                return (
                  &lt;ul&gt;
                    {data.map(item =&gt; (
                      &lt;li key={item.id}&gt;{item.name}&lt;/li&gt;
                    ))}
                  &lt;/ul&gt;
                );
              }
      
              export default App;
            </code></pre>
          </section>
      
          <!-- Node.js Section -->
          <section>
            <h4 class="text-xl font-semibold mb-4">Node.js (Server environment)</h4>
            <p>Node.js is a JavaScript runtime built on Chrome’s V8 engine, allowing developers to use JavaScript for server-side scripting.</p>
            <h5 class="text-lg font-semibold mb-2">Key Features:</h5>
            <ul class="list-disc pl-6 space-y-2">
              <li>
                <span class="font-medium">Non-blocking I/O:</span> Handles multiple requests concurrently.
              </li>
              <li>
                <span class="font-medium">JavaScript Everywhere:</span> Use the same language (JavaScript) for both client and server.
              </li>
              <li>
                <span class="font-medium">Event-driven:</span> Handles asynchronous events efficiently.
              </li>
              <li>
                <span class="font-medium">NPM:</span> Comes with a rich package manager, providing a huge range of third-party modules.
              </li>
            </ul>
            <h5 class="text-lg font-semibold mb-2">Snapshot Example:</h5>
            <pre class="bg-gray-100 p-4 rounded-md"><code>
              const http = require("http");
      
              const server = http.createServer((req, res) =&gt; {
                res.statusCode = 200;
                res.setHeader("Content-Type", "text/plain");
                res.end("Hello, MERN Stack\n");
              });
      
              server.listen(3000, () =&gt; {
                console.log("Server running on port 3000");
              });
      
              const express = require("express");
              const app = express();
      
              app.use(express.static("public"));
      
              app.listen(3000, () =&gt; {
                console.log("Serving static files from the public folder");
              });
            </code></pre>
          </section>
      
          <!-- Full MERN Stack Example -->
          <section>
            <h4 class="text-xl font-semibold mb-4">Full MERN Stack Example</h4>
            <p>A basic MERN stack application involves a combination of the front-end (React) interacting with the back-end (Express and Node.js) and storing data in MongoDB.</p>
            <h5 class="text-lg font-semibold mb-2">Snapshot Example:</h5>
            <pre class="bg-gray-100 p-4 rounded-md"><code>
                const express = require("express");
                const mongoose = require("mongoose");
        
                const app = express();
                app.use(express.json());
        
                mongoose.connect("mongodb://localhost:27017/mern", { useNewUrlParser: true });
        
                const UserSchema = new mongoose.Schema({
                  name: String,
                  email: String,
                });
        
                const User = mongoose.model("User", UserSchema);
        
                app.post("/users", async (req, res) =&gt; {
                  const user = new User(req.body);
                  await user.save();
                  res.send(user);
                });
        
                app.listen(3000, () =&gt; {
                  console.log("Server running on port 3000");
                });
        
                import React, { useState } from "react";
                import axios from "axios";
        
                function App() {
                  const [name, setName] = useState("");
                  const [email, setEmail] = useState("");
        
                  const handleSubmit = async (e) =&gt; {
                    e.preventDefault();
                    await axios.post("/users", { name, email });
                    alert("User added! ");
                  };
        
                  return (
                    &lt;form onSubmit={handleSubmit}&gt;
                      &lt;input
                        type="text"
                        value={name}
                        onChange={(e) =&gt; setName(e.target.value)}
                        placeholder="Name"
                      /&gt;
                      &lt;input
                        type="email"
                        value={email}
                        onChange={(e) =&gt; setEmail(e.target.value)}
                        placeholder="Email"
                      /&gt;
                      &lt;button type="submit"&gt;Submit&lt;/button&gt;
                    &lt;/form&gt;
                  );
                }
        
                export default App;
              </code></pre>
            </section>
        
            <!-- Key Advantages of MERN Stack -->
            <section>
              <h4 class="text-xl font-semibold mb-4">Key Advantages of MERN Stack</h4>
              <ul class="list-disc pl-6 space-y-2">
                <li>
                  <span class="font-medium">JavaScript Consistency:</span> Use JavaScript across the stack for front-end, back-end, and database queries.
                </li>
                <li>
                  <span class="font-medium">Flexibility:</span> Suitable for single-page applications (SPAs) and large-scale applications.
                </li>
                <li>
                  <span class="font-medium">Open Source:</span> All technologies in the stack are open-source with a large developer community.
                </li>
                <li>
                  <span class="font-medium">Full-stack Solution:</span> From UI to server and database, MERN covers everything needed to build a modern web application.
                </li>
              </ul>
              <p>The MERN Stack is a powerful and efficient way to build full-stack applications, providing flexibility, scalability, and ease of use for both small and large-scale web applications.</p>
            </section>
          </div>
        </div>