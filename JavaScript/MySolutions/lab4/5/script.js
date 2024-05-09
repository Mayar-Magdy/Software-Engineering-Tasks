    var gallery = document.querySelector(".gallery");
    var images = gallery.querySelectorAll("img"); //arr
    var index = 0;
    var timer;
    function showImage(index) {
      for (let i = 0; i < images.length; ++i)
        images[i].style.display = "none";
      images[index].style.display = "block";
    }
    function startSlides() {
      timer = setInterval(play, 500);
      function play() {
        ++index;
        if (index >= images.length)
          index = 0;
        showImage(index);
      }
    }
    function stopSlides() {
      clearInterval(timer);
    }

    function showPrevImage() {
      --index;
      if (index < 0)
        index = (images.length) - 1;
      showImage(index);
    }

    function showNextImage() {
      ++index;
      if (index >= images.length)
        index = 0;
      showImage(index);
    }

    document.getElementById("play").addEventListener("click", startSlides);

    document.getElementById("stop").addEventListener("click", stopSlides);

    document.getElementById("prev").addEventListener("click", showPrevImage);
    //.or by on click
    document.getElementById("next").addEventListener("click", showNextImage);

    gallery.addEventListener("mouseover", startSlides);

    gallery.addEventListener("mouseout", stopSlides);
    //initial
    showImage(index);