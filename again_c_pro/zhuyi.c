#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


/*
在 C 语言中，使用 scanf 来读取用户输入并初始化数组时，可能会遇到不按预期读取换行符（\n）的问题。原因是 scanf 的工作方式与标准输入的处理有关系，尤其是对于空白字符（包括空格、换行符、制表符等）。

1. scanf 的行为
scanf 会按照指定的格式从标准输入流（通常是键盘）读取输入。当使用 scanf 读取数据时，它会跳过输入中的空白字符（空格、制表符、换行符等），但如果你显式地要求读取空白字符，它才会被包括在内。

2. \n 以及 scanf 的输入处理
scanf 对换行符的处理非常特殊。换行符（\n）表示输入的结束标志，在不同的输入缓冲区中，它有不同的处理方式：

换行符的跳过：如果你使用 scanf 来读取整数、字符、字符串等数据类型，它会跳过空白字符（包括换行符）并等待有效的输入。这意味着，换行符不会被视为有效数据输入，因此不会被写入到数组中。

读取空白字符：如果你希望读取换行符或其他空白字符，可以使用格式说明符，例如 %c 来读取单个字符，包括换行符。

3. 示例问题
假设你有一个 for 循环来使用 scanf 初始化数组，代码可能如下：

c
复制代码
#include <stdio.h>

int main() {
    int arr[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);  // 输入整数
    }

    // 输出数组内容
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
在此代码中，scanf 只会读取整数，并跳过所有空白字符（包括换行符）。即使你在输入时按下 Enter 键（产生换行符），它也不会将换行符读取进数组。输入的换行符只是用来分隔不同的输入，而不被存储。

4. 如何读取换行符
如果你希望读取换行符（或其他空白字符），你可以使用 %c 来读取每个字符，包括换行符。以下是一个改进的例子：

c
复制代码
#include <stdio.h>

int main() {
    char arr[5];

    for (int i = 0; i < 5; i++) {
        scanf("%c", &arr[i]);  // 使用%c来读取单个字符，包括换行符
    }

    // 输出数组内容
    for (int i = 0; i < 5; i++) {
        printf("'%c' ", arr[i]);
    }

    return 0;
}
5. 常见问题：换行符没被读取
有时在使用 scanf 时，读取整数后会发现换行符没被正确处理。这通常发生在你输入多个数据时，按下 Enter 键后，换行符留在输入缓冲区中，可能影响接下来的 scanf 调用。例如：

c
复制代码
#include <stdio.h>

int main() {
    char arr[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);  // 这将跳过换行符
    }

    // 输出数组内容
    for (int i = 0; i < 5; i++) {
        printf("'%c' ", arr[i]);
    }

    return 0;
}
这段代码可能会出现的问题是，scanf("%d", &arr[i]); 每次读取整数时，换行符（\n）会留在输入缓冲区中。你可以通过 getchar() 来清除缓冲区中的换行符或空白字符，或改为读取字符而非整数。

6. 解决办法：清除输入缓冲区
为了避免这种问题，可以在每次读取数据后清理输入缓冲区：

c
复制代码
#include <stdio.h>

int main() {
    int arr[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);  // 输入整数
        getchar();              // 清除输入缓冲区中的换行符
    }

    // 输出数组内容
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
7. 总结
scanf 会跳过空白字符（包括换行符），除非你显式地用 %c 来读取每个字符。
换行符 \n 是输入中的分隔符，scanf 默认会跳过它，除非你用 %c 格式说明符来捕获它。
如果你需要处理输入中的换行符或其他空白字符，可以使用 getchar() 或 %c。
这种行为在使用 scanf 时需要特别注意，以避免输入中的换行符和空白字符被忽略。
*/




/*
printf 函数的返回值是一个非常有用的信息，尤其在需要对输出进行进一步处理时。让我们详细了解一下。

1. printf 函数的返回值
在 C 语言中，printf 函数的返回值是 成功打印的字符数（不包括终止的空字符 \0）。

2. 返回值类型
返回值类型：int 类型
含义：它返回实际输出到标准输出设备（通常是屏幕）的字符数量。如果发生错误，它将返回一个负值。
*/


//scanf会跳过换行符，空格符号
//当你输入一个整数后，scanf 会跳过输入后面的空白字符（包括回车、空格等）。
//由于空格在格式字符串中，这个空格指示 scanf 继续读取空白字符，直到遇到下一个非空白字符或者输入结束。
//结果是，每次输入一个整数后，scanf 会额外等待一个额外的输入，因为它在跳过空白字符后又认为你还没有输入完整。