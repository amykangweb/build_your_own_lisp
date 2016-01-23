<h1>Build Your Own Lisp</h1>

<h2>Description</h2>

Code from <strong>Build Your Own Lisp</strong> book.

<h2>Information</h2>

<h3>Setup</h3>
<ul>
  <li>
    Install compiler: sudo apt-get install build-essential
  </li>
  <li>
    Install editline: sudo apt-get install libedit-dev
  </li>
</ul>

<h3>hello_world.c</h3>
<ul>
  <li>To compile: cc -std=c99 -Wall hello_world.c -o hello_world -lm
  </li>
  <li>To run: ./hello_world</li>
</ul>

<h3>prompt.c</h3>
<ul>
  <li>To compile: cc -std=c99 -Wall prompt.c -ledit -o prompt
  </li>
  <li>To run: ./hello_world</li>
</ul>

<h2>Resources</h2>

<p><a href="http://www.buildyourownlisp.com/">http://www.buildyourownlisp.com/</a></p>
