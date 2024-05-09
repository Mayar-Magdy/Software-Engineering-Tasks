function sum(x,y){
    return x+y
}


function convertToArray(x,y,z,m){
    return [x,y,z,m]
}


function add(){
        // no params ==> return 0  ==> DONE  cmd
        //params ==> string ==> throw error 
        // params ==> int ==> sum of int   444444dfjvbjfbv52512
    if(arguments.length == 0){
        return 0 
    }else{
        var result = 0;
        for(i=0; i < arguments.length; i++){
            if(isFinite(arguments[i])){
                result += arguments[i]
            }else{
                var err = new TypeError("add function expect numbers only ")
                throw err;
            }
        }
        return result
    }
}


module.exports = {sum, convertToArray, add};