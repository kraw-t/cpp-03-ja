#pragma once

// クラスの名前は `unique_int_ptr`
class unique_int_ptr {
 public:
  // ヒープに整数を割り当てるコンストラクタ
  unique_int_ptr(int num);

  // 動的に割り当てられたメモリをクリーンアップするデストラクタ
  ~unique_int_ptr();

  // 格納されたポインタを返す `get` メソッド
  int* get(void) const;

  // ポインタの制御を放棄する `release` メソッド
  // このメソッドでは格納されたポインタを返し、クラス内でポインタを `nullptr` に設定して再び使用されないようにする
  int* release(void);

  // *演算子のオーバーロード
  // `unique_int_ptr` を簡単に間接参照して参照先の値を使用できるようにする
  int& operator*(void);

 private:
  int* ptr;
};
