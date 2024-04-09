# チャレンジ3

## タスク1

信号機の状態 ( `red` 、 `yellow` 、 `green` ) を表す `enum class` (列挙型クラス) である `TrafficLightState` を作成してください。信号機の状態を引数にとり、その状態の継続時間 (秒単位) を返す関数 `trafficLightDuration` を作成してください。

## タスク2

比較対象の値、最小値、最大値を引数にとるテンプレート関数 `clamp` を実装してください。値が最小値より小さい場合は最小値、値が最大値より大きい場合は最大値、これ以外の場合は値を返します。`int` 、`float` 、`double` などのさまざまな型でこの関数をテストしてください。

## タスク3

`constexpr` を使用して、円周率の値を表す定数 `pi` を書いてください。次に、この `pi` 定数を使用して、指定された半径の円周を計算する `constexpr` 関数 `calculateCircumference` を作成します。[godbolt.org](https://godbolt.org/) などのツールを使用して、コンパイルされたコードがどのように表示されるか見てみましょう。

### 結果 constexprあり

```
constexpr double pi = 3.141592;

constexpr double calculateCircumference(double r) {
  return (2.0 * pi * r);
}

int main() {
  double s1 = calculateCircumference(3.0);
  double s2 = calculateCircumference(10.0);

  return 0;
}
```
↓
```
main:
        push    rbp
        mov     rbp, rsp
        movsd   xmm0, QWORD PTR .LC0[rip]
        movsd   QWORD PTR [rbp-8], xmm0
        movsd   xmm0, QWORD PTR .LC1[rip]
        movsd   QWORD PTR [rbp-16], xmm0
        mov     eax, 0
        pop     rbp
        ret
.LC0:
        .long   1030242396
        .long   1077074300
.LC1:
        .long   -1146240872
        .long   1078946425
```

### 結果 piのみconstexpr

```
constexpr double pi = 3.141592;

double calculateCircumference(double r) {
  return (2.0 * pi * r);
}

int main() {
  double s1 = calculateCircumference(3.0);
  double s2 = calculateCircumference(10.0);

  return 0;
}
```
↓
```
calculateCircumference(double):
        push    rbp
        mov     rbp, rsp
        movsd   QWORD PTR [rbp-8], xmm0
        movsd   xmm1, QWORD PTR [rbp-8]
        movsd   xmm0, QWORD PTR .LC0[rip]
        mulsd   xmm0, xmm1
        movq    rax, xmm0
        movq    xmm0, rax
        pop     rbp
        ret
main:
        push    rbp
        mov     rbp, rsp
        sub     rsp, 16
        mov     rax, QWORD PTR .LC1[rip]
        movq    xmm0, rax
        call    calculateCircumference(double)
        movq    rax, xmm0
        mov     QWORD PTR [rbp-8], rax
        mov     rax, QWORD PTR .LC2[rip]
        movq    xmm0, rax
        call    calculateCircumference(double)
        movq    rax, xmm0
        mov     QWORD PTR [rbp-16], rax
        mov     eax, 0
        leave
        ret
.LC0:
        .long   -57999238
        .long   1075388922
.LC1:
        .long   0
        .long   1074266112
.LC2:
        .long   0
        .long   1076101120
```