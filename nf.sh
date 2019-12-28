for((i = 1 ; i<= $1 ; ++i)); do
    touch $i.cpp 
    cat template.cpp > $i.cpp
    echo $i
done
