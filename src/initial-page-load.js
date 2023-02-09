import restaurantImage from "./assets/pexels-pixabay-260922.jpg";
import menuImagePhoto from "./assets/pexels-photo-4913361.jpeg";

export default function initialPageLoader() {
  const mainContent = document.getElementById("content");
  mainContent.replaceChildren();

  const heading = document.createElement("h1");
  heading.innerText = "Welcome to the Rusty Catering Restaurant";
  heading.classList.add("header");
  mainContent.appendChild(heading);

  const imagePic = document.createElement("img");
  imagePic.src = restaurantImage;
  imagePic.alt = "Restaurant Image";
  imagePic.classList.add("image");
  mainContent.appendChild(imagePic);

  const p = document.createElement("p");
  p.innerText = "Our Menu";
  p.classList.add("description");
  mainContent.appendChild(p);

  const menuImage = document.createElement("img");
  menuImage.alt = "Menu Image";
  menuImage.src = menuImagePhoto;
  menuImage.classList.add("image");
  mainContent.appendChild(menuImage);
}
