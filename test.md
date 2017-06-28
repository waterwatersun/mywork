![Alt text](https://g.gravizo.com/source/custom_mark13?https%3A%2F%2Fraw.githubusercontent.com%2Fwaterwatersun%2Fmywork%2Fmaster%2Ftest.md?1)
<details> 
<summary></summary>
custom_mark13
@startuml;
%28*%29 --> if "Some Test" then;
-->[true] "activity 1";
if "" then;
-> "activity 3" as a3;
else;
if "Other test" then;
-left-> "activity 5";
else;
--> "activity 6";
endif;
endif;
else;
->[false] "activity 2";
endif;
a3 --> if "last test" then;
--> "activity 7";
else;
-> "activity 8";
endif;
@enduml
custom_mark13
</details>

```
![Alt text](https://g.gravizo.com/source/custom_mark13?https%3A%2F%2Fraw.githubusercontent.com%2Fwaterwatersun%2Fmywork%2Fmaster%2Ftest.md)
<details> 
<summary></summary>
custom_mark13
@startuml;
%28*%29 --> if "Some Test" then;
-->[true] "activity 1";
if "" then;
-> "activity 3" as a3;
else;
if "Other test" then;
-left-> "activity 5";
else;
--> "activity 6";
endif;
endif;
else;
->[false] "activity 2";
endif;
a3 --> if "last test" then;
--> "activity 7";
else;
-> "activity 8";
endif;
@enduml
custom_mark13
</details>
```

**由于github上更改了某个东西，不支持gravizo直接引用（不支持多行）只能使用间接使用，原本gravizo是github上托管的开源项目，不知道间接使用的语法对gitlab是否有效；主要是注意**

 **1. 这个地址，raw.githubusercontent.com是github用来存储用户上传文件（不是项目仓库的文件，而是issue里的图片之类的）的服务地址**

**2. 网址URL中特殊字符转义编码，如%3A是：**
