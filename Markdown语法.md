# 一、Markdown简介
Markdown 是一种轻量级标记语言，它允许人们使用易读易写的纯文本格式编写文档。

Markdown 语言在 2004 由约翰·格鲁伯（英语：John Gruber）创建。

Markdown 编写的文档可以导出 HTML 、Word、图像、PDF、Epub 等多种格式的文档。

Markdown 编写的文档后缀为 .md, .markdown。

Markdown 能被使用来撰写电子书，如：Gitbook。

当前许多网站都广泛使用 Markdown 来撰写帮助文档或是用于论坛上发表消息。例如：GitHub、简书、reddit、Diaspora、Stack Exchange、OpenStreetMap 、SourceForge等。

Markdown编写Hello World!语法：

# Hello World!

# 二、Markdown标题
使用 # 号可表示 1-6 级标题，一级标题对应一个 # 号，二级标题对应两个 # 号，以此类推。

使用#号标记标题语法格式：

# 一级标题

## 二级标题

### 三级标题

#### 四级标题

##### 五级标题

###### 六级标题

不同的 Markdown 应用程序处理 # 和标题之间的空格方式并不一致。为了兼容考虑，请用一个空格在 # 和标题之间进行分隔。

# 三、Markdown换行语法
Markdown的段落没有特殊的格式，直接编写文字就好，段落的换行号是使用两个以上的空格加回车。
要创建段落，请使用空白行将一行或多行文本进行分隔。

**不要用空格（spaces）或制表符（ tabs）缩进段落。**

# 四、Markdown 强调语法

Markdown 可以使用以下几种字体：

用1个星号*或底线_表示斜体
用2个星号*或底线_表示粗体
用3个星号*或底线_表示粗斜体
语法格式：

*斜体文字*

_斜体文字_

**粗体文字**

__粗体文字__

***粗斜体文字***

___粗斜体文字___

Markdown 应用程序在处理单词或短语中间添加的下划线上并不一致。为了实现兼容性，请使用星号将单词或短语的中间部分加粗并以斜体显示，以示重要。


# 五、Markdown 引用语法
要创建块引用，请在段落前添加一个 > 符号。
> Dorothy followed her through many of the beautiful rooms in her castle.

多个段落的块引用
块引用可以包含多个段落。为段落之间的空白行添加一个 > 符号。
> Dorothy followed her through many of the beautiful rooms in her castle.
>
> The Witch bade her clean the pots and kettles and sweep the floor and keep the fire fed with wood.

嵌套块引用
块引用可以嵌套。在要嵌套的段落前添加一个 >> 符号。
> Dorothy followed her through many of the beautiful rooms in her castle.
>
>> The Witch bade her clean the pots and kettles and sweep the floor and keep the fire fed with wood.

带有其它元素的块引用
块引用可以包含其他 Markdown 格式的元素。并非所有元素都可以使用，你需要进行实验以查看哪些元素有效。
> #### The quarterly results look great!
>
> - Revenue was off the chart.
> - Profits were higher than ever.
>
>  *Everything* is going according to **plan**.

# 六、Markdown 列表语法
有序列表
要创建有序列表，请在每个列表项前添加数字并紧跟一个英文句点。数字不必按数学顺序排列，但是列表应当以数字 1 起始。
1. First item
2. Second item
3. Third item
4. Fourth item

无序列表
要创建无序列表，请在每个列表项前面添加破折号 (-)、星号 (*) 或加号 (+) 。缩进一个或多个列表项可创建嵌套列表。
- First item
- Second item
- Third item
- Fourth item

* First item
* Second item
* Third item
* Fourth item

+ First item
+ Second item
+ Third item
+ Fourth item

无序列表不要混用，建议使用-

在列表中嵌套其他元素
要在保留列表连续性的同时在列表中添加另一种元素，请将该元素缩进四个空格或一个制表符，如下例所示：
段落
*   This is the first list item.
*   Here's the second list item.

    I need to add another paragraph below the second list item.

*   And here's the third list item.

引用块
*   This is the first list item.
*   Here's the second list item.

    > A blockquote would look great below the second list item.

*   And here's the third list item.

代码块
代码块通常采用四个空格或一个制表符缩进。当它们被放在列表中时，请将它们缩进八个空格或两个制表符。
1.  Open the file.
2.  Find the following code block on line 21:

        <html>
          <head>
            <title>Test</title>
          </head>

3.  Update the title to match the name of your website.

图片
1.  Open the file containing the Linux mascot.
2.  Marvel at its beauty.

    ![Tux, the Linux mascot](http://qiniu.sprachlos.top/2023/03/25/641e9d570af39.jpg)

3.  Close the file.

列表
1. First item
2. Second item
3. Third item
    - Indented item
    - Indented item
4. Fourth item


# Markdown 代码语法
要将单词或短语表示为代码，请将其包裹在反引号 (`) 中。

At the command prompt, type `nano`.

转义反引号
如果你要表示为代码的单词或短语中包含一个或多个反引号，则可以通过将单词或短语包裹在双反引号(``)中。

``Use `code` in your Markdown file.``

代码块
要创建代码块，请将代码块的每一行缩进至少四个空格或一个制表符。

    <html>
      <head>
      </head>
    </html>



# Markdown 分隔线语法

可以在一行中用三个以上的星号*、减号-、底线_来建立一个分隔线，行内不能有其他东西，你也可以在星号或减号蹭插入空格。下面这种写法都可以建立分隔线：

***
* * *
******
- - -
------
为了兼容性，请在分隔线的前后均添加空白行。

# markdown 删除线
可以通过在单词中心放置一条水平线来删除单词。结果看起来像这样。此功能使您可以指示某些单词是一个错误，要从文档中删除。若要删除单词，请在单词前后使用两个波浪号~~。
如果段落上的文字要添加删除线，只需要在文字的两端加上两个波浪线~~即可。

语法格式：

baidu.com
~~sina.com~~
~~tencent.com~~


# markdown下划线

下划线可以通过HTML的标签来实现

<u>带下划线文本</u>


# Markdown 脚注
脚注使您可以添加注释和参考，而不会使文档正文混乱。当您创建脚注时，带有脚注的上标数字会出现在您添加脚注参考的位置。读者可以单击链接以跳至页面底部的脚注内容。

要创建脚注参考，请在方括号（[^1]）内添加插入符号和标识符。标识符可以是数字或单词，但不能包含空格或制表符。标识符仅将脚注参考与脚注本身相关联-在输出中，脚注按顺序编号。

在括号内使用另一个插入符号和数字添加脚注，并用冒号和文本（[^1]: My footnote.）。您不必在文档末尾添加脚注。您可以将它们放在除列表，块引号和表之类的其他元素之外的任何位置。

Here's a simple footnote,[^1] and here's a longer one.[^bignote]

[^1]: This is the first footnote.

[^bignote]: Here's one with multiple paragraphs and code.

    Indent paragraphs to include them in the footnote.

    `{ my code }`

    Add as many paragraphs as you like.


# Markdown 链接语法
链接文本放在中括号内，链接地址放在后面的括号中，链接title可选。

超链接Markdown语法代码：[超链接显示名](超链接地址 "超链接title")

这是一个链接 [Markdown语法](https://markdown.com.cn)。

给链接增加 Title
链接title是当鼠标悬停在链接上时会出现的文字，这个title是可选的，它放在圆括号中链接地址后面，跟链接地址之间以空格分隔。

这是一个链接 [Markdown语法](https://markdown.com.cn "最好的markdown教程")。

网址和Email地址
使用尖括号可以很方便地把URL或者email地址变成可点击的链接。
<https://markdown.com.cn>
<fake@example.com>

带格式化的链接
强调 链接, 在链接语法前后增加星号。 要将链接表示为代码，请在方括号中添加反引号。
I love supporting the **[EFF](https://eff.org)**.
This is the *[Markdown Guide](https://www.markdownguide.org)*.
See the section on [`code`](#code).

引用类型链接
引用样式链接是一种特殊的链接，它使URL在Markdown中更易于显示和阅读。参考样式链接分为两部分：与文本保持内联的部分以及存储在文件中其他位置的部分，以使文本易于阅读。

链接的第一部分格式
引用类型的链接的第一部分使用两组括号进行格式设置。第一组方括号包围应显示为链接的文本。第二组括号显示了一个标签，该标签用于指向您存储在文档其他位置的链接。

尽管不是必需的，可以在第一组和第二组括号之间包含一个空格。第二组括号中的标签不区分大小写，可以包含字母，数字，空格或标点符号。

以下示例格式对于链接的第一部分效果相同：

[hobbit-hole][1]
[hobbit-hole] [1]

链接的第二部分格式
引用类型链接的第二部分使用以下属性设置格式：

放在括号中的标签，其后紧跟一个冒号和至少一个空格（例如[label]:）。
链接的URL，可以选择将其括在尖括号中。
链接的可选标题，可以将其括在双引号，单引号或括号中。
以下示例格式对于链接的第二部分效果相同：

[1]: https://en.wikipedia.org/wiki/Hobbit#Lifestyle
[1]: https://en.wikipedia.org/wiki/Hobbit#Lifestyle "Hobbit lifestyles"
[1]: https://en.wikipedia.org/wiki/Hobbit#Lifestyle 'Hobbit lifestyles'
[1]: https://en.wikipedia.org/wiki/Hobbit#Lifestyle (Hobbit lifestyles)
[1]: <https://en.wikipedia.org/wiki/Hobbit#Lifestyle> "Hobbit lifestyles"
[1]: <https://en.wikipedia.org/wiki/Hobbit#Lifestyle> 'Hobbit lifestyles'
[1]: <https://en.wikipedia.org/wiki/Hobbit#Lifestyle> (Hobbit lifestyles)
可以将链接的第二部分放在Markdown文档中的任何位置。有些人将它们放在出现的段落之后，有些人则将它们放在文档的末尾（例如尾注或脚注）。

链接最佳实践
不同的 Markdown 应用程序处理URL中间的空格方式不一样。为了兼容性，请尽量使用%20代替空格。

# Markdown 图片语法
要添加图像，请使用感叹号 (!), 然后在方括号增加替代文本，图片链接放在圆括号里，括号里的链接后可以增加一个可选的图片标题文本。

插入图片Markdown语法代码：![图片alt](图片链接 "图片title")。

链接图片
给图片增加链接，请将图像的Markdown 括在方括号中，然后将链接添加在圆括号中。
[![图片](http://qiniu.sprachlos.top/2023/03/02/6400405fc57af.jpg "Shiprock")](http://qiniu.sprachlos.top/2023/03/02/6400405fc57af.jpg)

Markdown图片语法格式为：

![alt 属性文本](图片地址)
![alt 属性文本](图片地址 "可选标题")

开头一个感叹号!
接着一个方括号，里面放上图片的代替文字
接着一个普通括号，里面放上图片的网址，最后还可以用引号包住并加上选择性的'title'属性文字。
实例如下：

![有问题上知乎 图标](https://pic4.zhimg.com/80/v2-a47051e92cf74930bedd7469978e6c08_hd.png)

---

![通信人家园 图标](http://www.txrjy.com/static/image/common/logo.gif)

# Markdown 转义字符语法
要显示原本用于格式化 Markdown 文档的字符，请在字符前面添加反斜杠字符 \ 。

# Markdown表格
Markdown制作表格使用|来分隔不同的单元格，使用-来分隔表头和其他行。

语法格式：

|表头1|表头2|
|----|----|
|单元格11|单元格12|
|单元格21|单元格22|


对齐方式

可以设置表头的对齐方式：

-: 设置内容或标题栏右对齐
:- 设置内容或标题栏左对齐
:-: 设置内容或标题栏居中对齐
语法格式：

|左对齐|居中对齐|右对齐|
|:----|:----:|----:|
|单元格11|单元格12|单元格13|
|单元格21|单元格22|单元格23|

# Markdown 围栏代码块
Markdown基本语法允许您通过将行缩进四个空格或一个制表符来创建代码块。如果发现不方便，请尝试使用受保护的代码块。根据Markdown处理器或编辑器的不同，您将在代码块之前和之后的行上使用三个反引号（(```）或三个波浪号（~~~）。

```
{
  "firstName": "John",
  "lastName": "Smith",
  "age": 25
}
```

语法高亮
许多Markdown处理器都支持受围栏代码块的语法突出显示。使用此功能，您可以为编写代码的任何语言添加颜色突出显示。要添加语法突出显示，请在受防护的代码块之前的反引号旁边指定一种语言。

```json
{
  "firstName": "John",
  "lastName": "Smith",
  "age": 25
}
```

# Markdown 标题编号
许多Markdown处理器支持标题的自定义ID - 一些Markdown处理器会自动添加它们。添加自定义ID允许您直接链接到标题并使用CSS对其进行修改。要添加自定义标题ID，请在与标题相同的行上用大括号括起该自定义ID。
### My Great Heading {#custom-id}

链接到标题ID (#headid)
通过创建带有数字符号（#）和自定义标题ID的[标准链接]((/basic-syntax/links.html)，可以链接到文件中具有自定义ID的标题。

其他网站可以通过将自定义标题ID添加到网页的完整URL（例如[Heading IDs](https://markdown.com.cn/extended-syntax/heading-ids.html#headid)）来链接到标题。


# Markdown 定义列表
一些Markdown处理器允许您创建术语及其对应定义的定义列表。要创建定义列表，请在第一行上键入术语。在下一行，键入一个冒号，后跟一个空格和定义。
First Term
: This is the definition of the first term.

Second Term
: This is one definition of the second term.
: This is another definition of the second term.

# Markdown 任务列表语法
任务列表使您可以创建带有复选框的项目列表。在支持任务列表的Markdown应用程序中，复选框将显示在内容旁边。要创建任务列表，请在任务列表项之前添加破折号-和方括号[ ]，并在[ ]前面加上空格。要选择一个复选框，请在方括号[x]之间添加 x 。

- [x] Write the press release
- [ ] Update the website
- [ ] Contact the media

# Markdown 使用 Emoji 表情
有两种方法可以将表情符号添加到Markdown文件中：将表情符号复制并粘贴到Markdown格式的文本中，或者键入emoji shortcodes。

复制和粘贴表情符号
在大多数情况下，您可以简单地从Emojipedia 等来源复制表情符号并将其粘贴到文档中。许多Markdown应用程序会自动以Markdown格式的文本显示表情符号。从Markdown应用程序导出的HTML和PDF文件应显示表情符号。

Tip: 如果您使用的是静态网站生成器，请确保将HTML页面编码为UTF-8。.

使用表情符号简码
一些Markdown应用程序允许您通过键入表情符号短代码来插入表情符号。这些以冒号开头和结尾，并包含表情符号的名称。

去露营了！ :tent: 很快回来。

真好笑！ :joy:
呈现的输出如下所示：

去露营了！⛺很快回来。

真好笑！😂

Note: 注意：您可以使用此表情符号简码列表，但请记住，表情符号简码因应用程序而异。有关更多信息，请参阅Markdown应用程序的文档。

# 数学公式

当你需要在编辑器中插入数学公式时，可以使用两个美元符 $$ 包裹 TeX 或 LaTeX 格式的数学公式来实现。

实例如下：

$$
\int_0^1 {x^2} \,{\rm d}x
$$

# 自动网址链接
许多Markdown处理器会自动将URL转换为链接。这意味着如果您输入http://www.example.com，即使您未使用方括号，您的Markdown处理器也会自动将其转换为链接。
http://www.example.com

禁用自动URL链接
如果您不希望自动链接URL，则可以通过将URL表示为带反引号的代码来删除该链接。

`http://www.example.com`
