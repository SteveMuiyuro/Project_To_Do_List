export default function contacts() {
  const mainContent = document.getElementById("content");
  mainContent.replaceChildren();

  const heading = document.createElement("h1");
  heading.innerText = "Want to make a booking with us?";
  heading.classList.add("header");
  mainContent.appendChild(heading);

  const form = document.createElement("form");
  const fnlabel = document.createElement("label");
  fnlabel.id = "firstname";
  fnlabel.classList.add("label");
  fnlabel.innerText = "First Name:";

  const lnlabel = document.createElement("label");
  lnlabel.id = "lastname";
  lnlabel.innerText = "Last name:";
  lnlabel.classList.add("label");

  const fninput = document.createElement("input");
  fninput.id = "firstname";
  fninput.name = "firstname";
  fninput.placeholder = "Firstname";
  fninput.classList.add("input");

  const lninput = document.createElement("input");
  lninput.id = "lastname";
  lninput.name = "lastname";
  lninput.placeholder = "Lastname";
  lninput.classList.add("input");

  const elabel = document.createElement("label");
  elabel.innerText = "Email:";
  elabel.id = "email";
  elabel.classList.add("label");

  const einput = document.createElement("input");
  einput.id = "email";
  einput.name = "email";
  einput.placeholder = "Email";
  einput.classList.add("input");

  const tlabel = document.createElement("label");
  tlabel.innerText = "Make reservations today:";
  tlabel.id = "text";
  tlabel.classList.add("label");

  const textbox = document.createElement("textarea");
  textbox.classList.add("input");
  textbox.cols = "60";
  textbox.rows = "20";
  textbox.id = "text";

  form.appendChild(fnlabel);
  form.appendChild(fninput);
  form.appendChild(lnlabel);
  form.appendChild(lninput);
  form.appendChild(elabel);
  form.appendChild(einput);
  form.appendChild(tlabel);
  form.appendChild(textbox);
  mainContent.appendChild(form);
  form.classList.add("content-section");

  const submit = document.createElement("button");
  submit.innerText = "Submit";
  submit.classList.add("button");
  mainContent.appendChild(submit);
}
