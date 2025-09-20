for i in $(seq 25)
do
    diff -q ./OUT/$i.out ./ANS/$i.ans
done
