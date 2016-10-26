<?php
for ($i=1; $i<=40000; $i ++){
    $data[] = $i;

}
while(!empty($data))
{
    $tmp_data =  array_splice($data,0,1000);
    $count = count($tmp_data);
    for ($i=0; $i<$count; $i++)
    {
        echo $tmp_data[$i]."<br>";

    }
    unset($tmp_data);

}
//这个代码我测试了下 内存不会溢出

