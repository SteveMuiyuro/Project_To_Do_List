import logoImage from "./assets/rusty-catering-services-site-logo-removebg-preview.png";

export default function headers() {
  const body = document.querySelector("body");
  const headers = document.createElement("div");
  headers.classList.add("headers");
  body.insertBefore(headers, body.firstChild);

  const logo = document.createElement("img");
  logo.alt = "Company Logo";
  logo.src = logoImage;
  logo.classList.add("logo");
  const navbar = document.createElement("div");

  headers.appendChild(logo);
  headers.appendChild(navbar);

  const unOrderedList = document.createElement("ul");
  unOrderedList.classList.add("navbar");
  const Home = document.createElement("li");
  Home.innerText = "Home";
  Home.className = "home";
  const About = document.createElement("li");
  About.innerText = "About";
  About.className = "about";
  const Contacts = document.createElement("li");
  Contacts.innerText = "Contacts";
  Contacts.className = "contacts";

  navbar.appendChild(unOrderedList);
  unOrderedList.appendChild(Home);
  unOrderedList.appendChild(About);
  unOrderedList.appendChild(Contacts);

  const footer = document.createElement("div");
  footer.classList.add("footer");
  body.appendChild(footer);
  const email = document.createElement("p");
  email.classList.add("footer-content");
  const address = document.createElement("p");
  address.classList.add("footer-content");
  const tel = document.createElement("p");
  tel.classList.add("footer-content");

  email.innerText = "Email: rustycatering@info.com";
  address.innerText = "Address: P.o. Box 24823 - 00502 Nrb";
  tel.innerText = " Tel: 254 7258 9654 or 254 7858 6555";
  footer.appendChild(tel);
  footer.appendChild(address);
  footer.appendChild(email);
}
