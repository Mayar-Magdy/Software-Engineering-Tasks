function capitalizeText(input) {
  if (typeof input !== "string") {
    throw new TypeError("parameter should be string");
  }
  return input.toUpperCase();
}

function createArray(number) {
  const myArray = Array.from(Array(number).keys());
  return myArray;
};
// module.exports = {
//   capitalizeText,
//   createArray,
// };
