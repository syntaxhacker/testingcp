# noob testing///
for((i = 0 ; i<=1 ; ++i)); do
    echo $i
    ./testclone.oup $i > in
    ./a.oup < in > out1
    ./b.oup < in > out2
    diff -w out1 out2 || break
    # diff -w out1 out2
done 
