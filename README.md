# What is this?

It's tree for Akinator in text inorder form which include information about persons or animals "around" MIPT and its first faculty DREC and its first year students (2021 year of admission). If you want, you can use it in your project. To engage in this event send request.

# How does it use?

Before use install `hub`:
```
sudo apt install hub
```

and authorize by use any command.

In your directory print in command string (examples for Ubuntu):

```
git clone git@github.com:LegendaryHog/AkiTree.git

cd AKiTree

git remote add upstream git@github.com:LegendaryHog/AkiTree.git

hub fork git@github.com:LegendaryHog/AkiTree.git
```
And after this:
```
git remote set-url origin <url on your forked repository>
```
Include `AkiTree.h` in **main** file (if you include in another file, you can take compilation error aboudouble definition)
Change file for reading tree on `AkiTree/AkiTree.txt`. In start of programm call function `Pull ()` in end of programm `Push ()`.

# !!!WARNING!!! !!!ALLERT!!!

1. If your Akinator cannot work correct and damaging dump of tree dont use `Push ()`.

2. Try to not make unfunny cringe hurting your collegs and making double name in tree.

3. If yor edit tree right in file you **must** follow this syntax rules.

# Actual version of tree in graphviz.

![A](https://github.com/LegendaryHog/AkiTree/blob/master/Aki_Dump0.png)