import oc1image from "./assets/pexels-askar-abayev-5638612.jpg";
import oc2image from "./assets/kenny-eliason-kbcqR60zWeo-unsplash.jpg";
import oc3image from "./assets/pexels-mat-brown-1395966.jpg";
import wed1image from "./assets/pexels-photo-1616113.jpeg";
import wed2image from "./assets/pexels-craig-adderley-2306281.jpg";
import wed3image from "./assets/pexels-photo-169198.jpeg";
import ey1image from "./assets/nicole-herrero-rUxkZj6yHrA-unsplash.jpg";
import ey2image from "./assets/pexels-pavel-danilyuk-6405771.jpg";
import ey3image from "./assets/pexels-rodnae-productions-6519105.jpg";

export default function about() {
  const mainContent = document.getElementById("content");
  mainContent.replaceChildren();

  const heading = document.createElement("h1");
  heading.innerText = "What do we do?";
  heading.classList.add("header");
  mainContent.appendChild(heading);

  const aboutus_content = document.createElement("p");
  aboutus_content.innerText = "Outside Catering";
  aboutus_content.classList.add("ocdec");
  mainContent.appendChild(aboutus_content);
  const ocdiv = document.createElement("div");
  ocdiv.classList.add("ocdiv");
  mainContent.appendChild(ocdiv);
  const outsidecateringimg1 = document.createElement("img");
  outsidecateringimg1.classList.add("subimage");
  const outsidecateringimg2 = document.createElement("img");
  outsidecateringimg2.classList.add("subimage");
  const outsidecateringimg3 = document.createElement("img");
  outsidecateringimg3.classList.add("subimage");

  outsidecateringimg1.alt = "Outside catering image";
  outsidecateringimg1.src = oc1image;
  outsidecateringimg2.alt = "Outside catering image";
  outsidecateringimg2.src = oc2image;
  outsidecateringimg3.alt = "Outside catering image";
  outsidecateringimg3.src = oc3image;
  ocdiv.appendChild(outsidecateringimg1);
  ocdiv.appendChild(outsidecateringimg2);
  ocdiv.appendChild(outsidecateringimg3);

  const weddings = document.createElement("p");
  weddings.innerText = "Weddings";
  weddings.classList.add("wdec");
  mainContent.appendChild(weddings);
  const weddingsdiv = document.createElement("div");
  weddingsdiv.classList.add("wdiv");

  mainContent.appendChild(weddingsdiv);
  const weddingsimg1 = document.createElement("img");
  weddingsimg1.classList.add("subimage");
  const weddingsimg2 = document.createElement("img");
  weddingsimg2.classList.add("subimage");
  const weddingsimg3 = document.createElement("img");
  weddingsimg3.classList.add("subimage");

  weddingsimg1.alt = "Wedding image";
  weddingsimg1.src = wed1image;
  weddingsimg2.alt = "Wedding image";
  weddingsimg2.src = wed2image;
  weddingsimg3.alt = "weddings image";
  weddingsimg3.src = wed3image;
  weddingsdiv.appendChild(weddingsimg1);
  weddingsdiv.appendChild(weddingsimg2);
  weddingsdiv.appendChild(weddingsimg3);

  const eyp = document.createElement("p");
  eyp.innerText = "Parties";
  eyp.classList.add("eypdec");
  mainContent.appendChild(eyp);
  const eypdiv = document.createElement("div");
  eypdiv.classList.add("eypdiv");

  mainContent.appendChild(eypdiv);
  const eypimg1 = document.createElement("img");
  eypimg1.classList.add("subimage");
  const eypimg2 = document.createElement("img");
  eypimg2.classList.add("subimage");
  const eypimg3 = document.createElement("img");
  eypimg3.classList.add("subimage");

  eypimg1.alt = "event image";
  eypimg1.src = ey1image;
  eypimg2.alt = "event image";
  eypimg2.src = ey2image;
  eypimg3.alt = "event image";
  eypimg3.src = ey3image;
  eypdiv.appendChild(eypimg1);
  eypdiv.appendChild(eypimg2);
  eypdiv.appendChild(eypimg3);
}
