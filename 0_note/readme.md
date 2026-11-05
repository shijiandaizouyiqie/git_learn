ANs_Sxx_20230404_R02(DCVI&DCVS：IRange与IClamp的关系匹配说明及不同ForceMeasur

## Q FI会有IRange吗？FV会有VRange吗？

![1789976751089](image/readme/1789976751089.png)![1789976762386](image/readme/1789976762386.png)

![1789976771558](image/readme/1789976771558.png)

## 例程代码错误

![1789977681966](image/readme/1789977681966.png)

Force I 的时候不用加Vforce，这里写错了。

FI 的时候设置VClamp，顶多再多个VRange。

> 看板卡，有的板卡不支持VRange
> ![1789978923711](image/readme/1789978923711.png)

## FV：设置Vforce的大小，然后设置IClamp和IRange。

![1789977853448](image/readme/1789977853448.png)![1789977920619](image/readme/1789977920619.png)

> 用户手册的代码好像不太对。

![1789978578507](image/readme/1789978578507.png)

为什么FI 也是设置IRange，而不是VRange

![1789978852186](image/readme/1789978852186.png)

因为板卡不支持VRange，所以FI的话，直接设置VClamp即可。

FV的话则设置IClamp和IRange

## FN：FN要关掉Force状态

![1789978691818](image/readme/1789978691818.png)
