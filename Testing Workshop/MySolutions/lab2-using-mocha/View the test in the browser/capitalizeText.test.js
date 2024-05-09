describe("capitalizeText", function () {
  it("should return a string when a string is passed", function () {
 chai.expect(typeof capitalizeText("iti")).to.equal("string");  
});

  it("should return the input string capitalized", function () {
    chai.expect(capitalizeText("iti")).to.equal("ITI");
  });
  
 it("should throw TypeError when a number is passed", function () {
   chai.expect(() => capitalizeText(12)).to.throw(
     TypeError,
     "parameter should be string "
   );
 });


  it('should not return "hello" when "iti" is passed', function () {
  const result = capitalizeText("iti");
  chai.expect(result).to.not.equal("hello");
});
 });



 let num = 1;

 describe("createArray", function () {
   beforeEach(function () {
     ++num;
   });
   it("should return an array", function () {
     const result = createArray(num);
     chai.expect(result).to.be.an("array");
   });


   it("should include 1 when 3 is passed", function () {
     const result = createArray(3);
     chai.expect(result.includes(1));
   });

 it("should return an array of length 3 and include 1 when 3 is passed", function () {
   const result = createArray(3);
   chai.expect(result).to.have.lengthOf(3);
   chai.expect(result.includes(1)).to.be.true;
 });

   it("should delay the test by 5 seconds", function (done) {
     this.timeout(5000); //all test
     setTimeout(done(), 5000); // calling done
   });
   it.skip("should return an array of length 5 when 5 is passed", function () {
     const result = createArray(5);
     chai.expect.strictEqual(result.length, 5);
   });
   it("should pending"); // skip
   //remember the diff btw strictEqual & equal.
 });
