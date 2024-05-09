// 7-	Create an array of objects that hold student name along with his degree (Each element of the array is an object has 2 properties: Name and Degree).
let students = [
  {Name: "Ahmed", Degree: 85},
  {Name: "Fatima", Degree: 92},
  {Name: "Omar", Degree: 75},
  {Name: "Nour", Degree: 58},
  {Name: "Ali", Degree: 63}
];
 
// a.	Find student Name, who got degree between 90 and 100 [Use find()].
// to me
/* arrow function -> Lexical scope , this , new ,arguments,return 
----------------------------------------------------------------------------------------------------------------
الفرق بينهما هو في كيفية تعريف قيمة الكائن this -
الدالة العادية تحدد قيمة زيس بناء على كيفية استدعائها، بينما الدالة السهمية تستخدم قيمة زيس الخارجية للدالة-
function GoodUserClass(name) {
  this.name = name;
}
 
const BadUserClass = name => {
  this.name = name;
};
 
const ahmed = new GoodUserClass("mai"); // صحيح
const fatima = new BadUserClass("mayar"); // Uncaught TypeError: BadUserClass is not a constructor
---------------------------------------------------------------------------------------------------------------- 
function regFunction() {
  console.log(arguments);
 
  const arrFunction = () => {
    console.log(arguments);
  };
----------------------------------------------------------------------------------------------------------------
// Return number
const sum = (a, b) => a + b;
const getUser = async userId => {
  const user = await fetchUser(userId);
  return user;
};
*/
let student90 = 
students.find(student => student.Degree >= 90 && student.Degree <= 100);

let student_90 = 
students.find(function(student) {
  return student.Degree >= 90 && student.Degree <= 100;
});

let student1_90 = 
students.find(comp);
function comp(student) {
  return student.Degree >= 90 && student.Degree <= 100;
}

console.log(student90.Name);
console.log(student_90.Name);
console.log(student1_90.Name);


// b.	Print students names, who got a degree less than 60 [Use filter()].
let students60 = students.filter(student => student.Degree < 60);
console.log(students60)

// c.	Add a new student to the array [Use push()],and then use for…in to print all elements of the array.
students.push({Name: "reem", Degree: 81});
 for (let i in students) 
  console.log(students[i]);

// d.	Remove the last student of the array [Use pop()], and then use for…of to print all elements of the array.
students.pop();
for (let student of students) 
  console.log(student);

// e.	Sort the array alphabetically based on the student name. 
students.sort((a, b) => a.Name.localeCompare(b.Name));
/*students.sort(function(a, b) {
  return a.Name.localeCompare(b.Name);
}); */
// f.	Use splice() function to add 2 new students after the second element of the array [Bonus].
//splice add remove replace
//splice(ind , num of removed ele , new ele)
students.splice(2, 0, {Name: "Mariam", Degree: 88}, {Name: "Youssef", Degree: 67});
// g.	Use splice() function to remove 1 student after the third element in the array [Bonus].
students.splice(4, 1);

