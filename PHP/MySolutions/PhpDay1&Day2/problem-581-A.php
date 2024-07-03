<?php
fscanf(STDIN, '%d %d', $a, $b);
$mn=min($a,$b);
echo $mn;
$a-=$mn;
$b-=$mn;
echo " ".(int)(($a+$b)/2);
/*floating-point arithmetic
 the division operator (/) always returns a float value,
unless the two operands are integers and the numbers are evenly divisible,
 in which case an integer value will be returned1.
fdiv() - intdiv()
*/
?>



