if [ "$1" == "go" ] ;
then 
    g++ -g -fsanitize=undefined -DLOCAL_JUDGE_HOST -march=x86-64 "$2.cxx" -o temp.out
    echo -e "\e[31;41;1m\n\n               READY               \n\n============[==入力==]=============\n\n\e[0m"
    OUTPUT="$(./temp.out)"
    echo -e "\e[31;42;1m\n\n\n[=====出力=====]\n\tサンプル\n${OUTPUT}\e[0m"
elif [ "$1" == "new" ] ;
then
    cp modules/temp.cxx "$2.cxx"
    code "$2.cxx"
elif [ "$1" == "googer" ] ;
then 
    cp modules/googer.cxx "$2.cxx"
    code "./$2.cxx"
    echo -e "\e[37;42;1m[✓]( ͡°👅 ͡°)[==出力==]\n\n\nコンテスト期間中における、ビジュアライズ結果の共有や解法・考察に関する言及は禁止されています。ご注意下さい。\n\n\n\n\e[0m\n\n\e[33;40;1m─=≡Σ((( つ•̀ω•́)つ AC\e[0m"
elif [ "$1" == "ok" ] ;
then
    g++ -v -Wall -Wextra -g -O3 -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC -fsanitize=undefined -Wshadow -Wformat=2 -Wfloat-equal -Wconversion -Wlogical-op -Wshift-overflow=2 -Wduplicated-cond -Wcast-qual -march=x86-64 "$2.cxx" -o ______FLOW____.out
    echo -e "\e[34;47m========================================"
    objdump --syms ______FLOW____.out
    echo -e "\e[0m\n\n\e[40;30m========================================\e[0m"
    if [ $? -eq 0 ] ;
    then
        echo  -e "\e[37;42;1m\n\n[✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓]\n正解\n[✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓]\n\e[0m"
    else
        echo -e "\e[31;41;1m\n\n[!!!!!!!!!!!!]\nコンパイルエラー\n[!!!!!!!!!!!!]\n\e[0m"
    fi
elif [ "$1" == "dart" ] ;
then
    cp modules/main.dart "$2.dart"
    code "$2.dart"
elif [ "$1" == "rdart" ] ;
then   
    dart "$2.dart"
elif [ "$1" == "jj" ] ;
then
    cp modules/Main.java "Main_$2.java"
    code "Main_$2.java"
elif [ "$1" == "rj" ] ;
then 
    java "Main_$2.java"
fi
