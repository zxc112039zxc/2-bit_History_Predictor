# 2-bit_History_Predictor

## 流程介紹
    1. 讀入測資
    2. 將測資照順序push_back進vector(初始值會含有兩個N，避免在判斷前兩個outcome時發生存取錯誤)
    3. 判斷前兩個outcome是否為T，是的話將predictPos加1或2(2的0次方或1次方)
    4. 判斷在predictPos上的int是否為0或1(mean SN or WN)，是的話predict即為N，反之則為T
    5. 輸出結果
    
## 輸入測資
    TTTTNNTNTNTNTNTNT
    
## 輸出結果
                   State     Pred     Outcome     Correct
    (00, SN, SN, SN, SN)        N           T          No
    -----------------------------------------------------
                   State     Pred     Outcome     Correct
    (01, WN, SN, SN, SN)        N           T          No
    -----------------------------------------------------
                   State     Pred     Outcome     Correct
    (11, WN, WN, SN, SN)        N           T          No
    -----------------------------------------------------
                   State     Pred     Outcome     Correct
    (11, WN, WN, SN, WN)        N           T          No
    -----------------------------------------------------
                   State     Pred     Outcome     Correct
    (11, WN, WN, SN, WT)        T           N          No
    -----------------------------------------------------
                   State     Pred     Outcome     Correct
    (10, WN, WN, SN, WN)        N           N         YES
    -----------------------------------------------------
                  State     Pred     Outcome     Correct
    (00, WN, WN, SN, WN)        N           T          No
    -----------------------------------------------------
                   State     Pred     Outcome     Correct
    (01, WT, WN, SN, WN)        N           N         YES
    -----------------------------------------------------
                   State     Pred     Outcome     Correct
    (10, WT, SN, SN, WN)        N           T          No
    -----------------------------------------------------
                  State     Pred     Outcome     Correct
    (01, WT, SN, WN, WN)        N           N         YES
    -----------------------------------------------------
                   State     Pred     Outcome     Correct
    (10, WT, SN, WN, WN)        N           T          No
    -----------------------------------------------------
                   State     Pred     Outcome     Correct
    (01, WT, SN, WT, WN)        N           N         YES
    -----------------------------------------------------
                   State     Pred     Outcome     Correct
    (10, WT, SN, WT, WN)        T           T         YES
    -----------------------------------------------------
                   State     Pred     Outcome     Correct
    (01, WT, SN, ST, WN)        N           N         YES
    -----------------------------------------------------
                   State     Pred     Outcome     Correct
    (10, WT, SN, ST, WN)        T           T         YES
    -----------------------------------------------------
                   State     Pred     Outcome     Correct
    (01, WT, SN, ST, WN)        N           N         YES
    -----------------------------------------------------
                   State     Pred     Outcome     Correct
    (10, WT, SN, ST, WN)        T           T         YES
    -----------------------------------------------------
