for i in $(seq 11)
do
    diff --strip-trailing-cr ./OUT/$i.out ./ANS/$i.ans
done
