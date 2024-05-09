
function odds(start , end ){
if(!(start%2)) ++start
for(;start<end;start+=2) 
document.write(start)        
}
var start =parseInt (prompt("Enter the start "))
var end  =parseInt (prompt("Enter the end "))
odds(start , end )