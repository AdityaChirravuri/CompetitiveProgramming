awk '{
    total=($2+$3+$4)/3 
    if(total>=80)print $1, $2, $3, $4, ": A"
    else if(total<80 && total>=60)print $1, $2, $3, $4, ": B"
    else if(total<60 && total>=50)print $1, $2, $3, $4, ": C"
    else print $1, $2, $3, $4, ": FAIL"
    
}'

#If the average of the three scores is 80 or more, the grade is 'A'. If the average is 60 or above, but less than 80, the grade is 'B'. If the average is 50 or above, but less than 60, the grade is 'C'. Otherwise the grade is 'FAIL'.
