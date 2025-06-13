# QuickLend 🎭📷👗

QuickLend is a front-end project for an equipment and fashion rental service. It allows users to browse various product categories (like dresses, musical instruments, cameras, and accessories), add items to a cart, and store their selections using local storage. The project features an interactive shopping cart built with JavaScript.

---

## 📁 Project Structure

- **HTML Pages:**
  - `index.html` – Home page
  - `dress.html` – Dress rental section
  - `cameras.html` – Cameras & photography
  - `musical.html` – Musical instruments
  - `access.html` – Accessories
  - `events.html` – Events and activities
  - `poject.c` – C-based seat reservation system (possibly integrated/linked externally)

- **CSS Files:**
  - `style.css` – Main stylesheet
  - `responsive.css` – Responsive design
  - `style_m.css`, `styleall.css`, `stylean.css`, `stylekr.css` – Thematic or modular stylesheets for specific pages or categories

- **JavaScript:**
  - `all.js` – Controls cart functionality (add/remove/update), quantity management, and localStorage cart persistence

---

## 🛒 Key Features

- **Cart System:**
  - Add items to cart with quantity
  - Update item quantities dynamically
  - Remove items from cart
  - Cart state is saved in browser using `localStorage`
  - Total price calculation with precision handling

- **Category Pages:**
  - Intuitive layout for product types like:
    - Dresses
    - Cameras
    - Musical instruments
    - Accessories
    - Events

- **Responsive Design:** 
  - Optimized for various screen sizes using dedicated CSS files

---

## 🛠 How to Use

1. Clone or download the repository
2. Open `index.html` in a web browser
3. Navigate through category pages and interact with products
4. Use the cart icon to view your selections
5. All cart data persists until manually cleared (via local storage)

---

## 📌 Notes

- This is a **front-end only** application. No backend or payment system is integrated.
- JavaScript-based cart is **persistent via browser storage**, simulating a basic e-commerce experience.
- The `poject.c` file appears to be a separate seat reservation module in C and is **not linked directly to the web interface**.

---

Feel free to enhance the project by integrating a backend, adding checkout functionality, or improving UI responsiveness!
