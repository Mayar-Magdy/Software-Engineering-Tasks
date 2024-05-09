<?php
$n=readline(); // or  fscanf(STDIN, "%d",$n);
while($n > 0):
    $x=readline();
    print(strlen($x)>10 ? $x[0] .strlen($x)-2 .$x[-1] : $x);
    echo "\n";
    --$n;
endwhile;

