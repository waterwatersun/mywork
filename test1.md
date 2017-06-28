# 洪星 #
> UML例子

![Alt text](https://g.gravizo.com/source/custom_mark10?https%3A%2F%2Fraw.githubusercontent.com%2Fwaterwatersun%2Fmywork%2Fmaster%2Ftest1.md)
<details> 
<summary></summary>
custom_mark10
  digraph G {
aize ="4,4";
main [shape=box];
main -> parse [weight=8];
parse -> execute;
main -> init [style=dotted];
main -> cleanup;
execute -> { make_string; printf};
init -> make_string;
edge [color=red];
main -> printf [style=bold,label="100 times"];
make_string [label="make a string"];
node [shape=box,style=filled,color=".7 .3 1.0"];
execute -> compare;
  }
custom_mark10
</details>

```
![Alt text](https://g.gravizo.com/source/custom_mark10?https%3A%2F%2Fraw.githubusercontent.com%2Fwaterwatersun%2Fmywork%2Fmaster%2Freadme.md)
<details> 
<summary></summary>
custom_mark10
  digraph G {
aize ="4,4";
main [shape=box];
main -> parse [weight=8];
parse -> execute;
main -> init [style=dotted];
main -> cleanup;
execute -> { make_string; printf};
init -> make_string;
edge [color=red];
main -> printf [style=bold,label="100 times"];
make_string [label="make a string"];
node [shape=box,style=filled,color=".7 .3 1.0"];
execute -> compare;
  }
custom_mark10
</details>
```
**由于github上更改了某个东西，不支持gravizo直接引用（不支持多行）只能使用间接使用，原本gravizo是github上托管的开源项目，不知道间接使用的语法对gitlab是否有效；主要是注意**

 **1. 这个地址，raw.githubusercontent.com是github用来存储用户上传文件（不是项目仓库的文件，而是issue里的图片之类的）的服务地址**

**2. 网址URL中特殊字符转义编码，如%3A是：**