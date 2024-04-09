# チャレンジ4

## タスク1

シンプルなLEDライトを制御する組み込みシステムを考えてみましょう。組み込みCライブラリを使用して、LEDのオンとオフを切り替えることができます。このCライブラリを使用して、LEDライトを制御するC++クラスを作成してください。

### 組み込みCライブラリ

最初に、LED制御をシミュレートする組み込みCライブラリを作成しましょう。

#### led_controller.c:

```c
#include "led_controller.h"

static bool led_state = false;

void led_init(void) {
    led_state = false;
}

void led_on(void) {
    led_state = true;
}

void led_off(void) {
    led_state = false;
}

bool led_get_state(void) {
    return led_state;
}
```

#### led_controller.h:

```c
#ifndef LED_CONTROLLER_H
#define LED_CONTROLLER_H

#include <stdbool.h>

void led_init(void);
void led_on(void);
void led_off(void);
bool led_get_state(void);

#endif // LED_CONTROLLER_H
```

上記の `led_controller` コードから静的ライブラリを作成しましょう。

まず、-cフラグを使用して、`led_controller.c` ファイルをコンパイルします。このフラグは、リンクを実行せずに `led_controller.c` をコンパイルしてオブジェクトファイルを作成するようコンパイルに指示するものです。

```bash
gcc -c -Wall -Werror -Wextra led_controller.c
```

このコマンドで `led_controller.o` オブジェクトファイルが作成されます。

次に、`ar` コマンドを使用して静的ライブラリを作成します (ライブラリに含めるオブジェクトファイルをこのコマンドに渡します)。

```bash
ar -rcs libledcontroller.a led_controller.o
```

静的ライブラリ `libledcontroller.a` が作成されます。このライブラリを後でC++プログラムにリンクできます。

C++プログラムを作成したら、最後にC++プログラムをコンパイルして静的ライブラリ `libledcontroller.a` をリンクします。

```bash
g++ -o main main.cpp led_controller.cpp -L. -lledcontroller
```

`-L` フラグではライブラリを含むパスを指定します。`-l` フラグではライブラリの名前を指定します (ライブラリの先頭の「lib」と末尾の「.a」を省略しています)。

## タスク2

`extern "C"` を使用して、LEDコントローラーのCライブラリ関数宣言をラップしてください。

## タスク3

`LedController` という名前のC++クラスを作成してください。このクラスでは、上記のCライブラリを使用してLEDライトを制御します。LEDの初期化、オン、オフ、状態の取得を行うためのコンストラクタそしてメンバ関数をそれぞれ、`turnOn`、`turnOff`、`getState` という名前で実装します。

## タスク4

`LedController` クラスを使用して、LEDライトを制御するC++プログラムを作成してください。LEDをオンにしてその状態を出力し、LEDをオフにしてその状態をもう一度出力します。
