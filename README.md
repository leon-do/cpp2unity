# C++ to .dll

## Windows

`g++ *.cpp -O3 -fPIC -shared -o sendTransaction.dll`

## OSX

`clang *.cpp -O3 -dynamiclib -arch x86_64 -o sendTransaction.bundle`

## Notes

https://www.youtube.com/watch?v=qljLhXfVt78

https://forum.unity.com/threads/unity-dllnotfoundexception-when-adding-so-plugins.379721/