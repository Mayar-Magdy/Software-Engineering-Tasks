// unittest --> function sum --> index.js 
var index = require("../index");
// unittest --> mocha 
var mocha = require("assert");
/// more testing function --> chai
// assert expect should 
var assert = require("chai").assert;
var expect = require("chai").expect;
var should = require("chai").should();



describe("unit test for sum function", function(){
    it("takes 2 positive numbers", function(){
        mocha.equal(index.sum(1,2), 3);
    })

    it("takes 2 negative numbers", function(){
        mocha.equal(index.sum(-2,-2), -4)
    })
})

describe("unit test for convertToArray function using chai assert", function(){
    it("test that return array", function(){
        assert.isArray(index.convertToArray(1,2,3,4))
    })

    it("return length of array equal 4", function(){
        assert.lengthOf(index.convertToArray(1,2,3,4),4)
    })

})

describe("unit test for convertToArray function using chai expect", function(){
    it("test that return array", function(){
        expect(index.convertToArray(1,2,3,4)).to.be.an("array");
    })

    it("return length of array equal 4", function(){
        expect(index.convertToArray(1,7,8,5)).have.lengthOf(4);
    })
})


describe("unit test for convertToArray function using chai should", function(){
    it("test that return array", function(){
        index.convertToArray(1,4,7,8).should.be.an("array")
    })

    it("return length of array equal 4", function(){
        index.convertToArray(7,7,7,7).should.have.lengthOf(4)
    })
})


describe("test add function", function(){

    before(function(){
        console.log("BEFORE ALL")
    })

    after(() => {
        console.log("After ALL")
    })

    beforeEach(() => {
        console.log("BEFORE EACH")
    })

    afterEach(() => {
        console.log("AFTER EACH")

    })

    it.skip("without any params must return 0", function(){
        expect(index.add()).to.be.equal(0)
    })

    it("test that if the params integer must retutn sumtion of these integers", function(){
        expect(index.add(4,5,1)).to.be.equal(10)
    })

    it("throw error when pass string", function(){
        // expect(index.add("svbsdv"))
        expect(function(){
            index.add("fgsdg")
        }).to.throw(TypeError, "add function expect numbers only ");
    })


})