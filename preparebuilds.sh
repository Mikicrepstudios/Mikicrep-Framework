rm releases/*
cp mf output -r

# Linux
mkdir mfbuild
cp output/app mfbuild
cp output/mf mfbuild -r

cd releases
7z a linux.zip ../mfbuild
cd ..
rm mfbuild -r

# Win x86_64
mkdir mfbuild
cp output/app-x86_64.exe mfbuild
cp output/mf mfbuild -r
cp output/x86_64dll/* mfbuild

cd releases
7z a win-x86_64.zip ../mfbuild
cd ..
rm mfbuild -r

# Win x86
mkdir mfbuild
cp output/app-x86.exe mfbuild
cp output/mf mfbuild -r
cp output/x86dll/* mfbuild

cd releases
7z a win-x86.zip ../mfbuild
cd ..
rm mfbuild -r
