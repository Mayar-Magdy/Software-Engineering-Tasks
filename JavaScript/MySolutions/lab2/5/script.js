// c.	Print the grades of all students with grades below 60 [Use filter()].

var grades = [60, 100, 10, 15, 85];

grades.sort(function(a, b) {
  return b -a;
});

//console.log(grades)
var mx = grades.find(check);
function check (grade){
  return grade <= 100;
}
// console.log(mx)

var below_60 = grades.filter(function(grade) {
  return grade < 60;
});
// console.log(below_60)


console.log("The sorted array is: " + grades);
console.log("The highest student degree is: " + mx);
console.log("The grades below 60 are: " + below_60);
