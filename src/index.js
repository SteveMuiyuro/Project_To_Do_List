import initialPageLoader from "./initial-page-load.js";
import about from "./about.js";
import contacts from "./contacts.js";
import headers from "./headers.js";
import "./style.css";

headers();
initialPageLoader();

const home = document.querySelector(".home");
home.addEventListener("click", initialPageLoader);
const aboutButton = document.querySelector(".about");
aboutButton.addEventListener("click", about);
const contactsButton = document.querySelector(".contacts");
contactsButton.addEventListener("click", contacts);

const logoButton = document.querySelector(".logo");
logoButton.addEventListener("click", initialPageLoader);
