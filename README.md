# ChineseChess

這是在QT用C++做出來有UI的象棋遊戲
QT能夠用signal-slot做出類似event trigger及執行event後的funciton

在此以MVC架構分成3個部份：

1.Model
  所有棋子都是繼承自Chess，再依照每個棋子不同的特性去訂function
  
2.View
  mainwindow為初始畫面，進入遊戲後會轉到widget
  
3.Control
  chessboard控制所有的物件，知道每個棋子的位置
  並且連接Model及View之間的互動
  

  
