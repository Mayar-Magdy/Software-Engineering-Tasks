var images = document.querySelectorAll("img");

function touchImg(img) {
  img.style.opacity = 0.3;
}

function leaveImg(img) {
  img.style.opacity = 1;
}

for (let i = 0; i < images.length; ++i) {
  images[i].addEventListener("mouseout", function () {
    leaveImg(images[i]);
  });
  images[i].addEventListener("mouseover", function () {
    touchImg(images[i]);
  });
}
