// a
var img = document.createElement("img");

// b.
img.setAttribute("src", "images/image8.jpg");
img.style.width = "40%";

// c.
var div = document.querySelector("div");
div.appendChild(img);

//c. part tw
//   1-div.appendChild(img); >>adds img last child of the div.
//   ..........................................................
//  2-insertBefore inserts a node before a reference node as a child of a specified parent node.
//   div.insertBefore(img, div.childNodes[0]); >> add img as first child of the div.

// d.
alert("Number of child nodes: " + div.childNodes.length);
// what are the count of div child nodes ? And Why ?
// ans : 1 child node , it will be 1 after the img is added because the img is the only child node of the div.

// e. Remove img
div.removeChild(img);
alert("Number of child nodes after removing: " + div.childNodes.length);
