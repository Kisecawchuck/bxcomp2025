for i in $(seq 15)
do
    diff -q ./OUT/$i.out ./ANS/$i.ans
done
