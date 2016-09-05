# My2048
仿写了个简单的2048小游戏

1
	主界面背景颜色：RGB（249，248，237）
	副界面背景颜色：RGB（173，158，144）
	按钮背景色：RGB（193，179，165）
	分数和最大分数颜色：RGB（235，223，221）
2


3
{
        NSLog(@"向左");
        
        //判断0的个数
        int cnt = 0;
        if(_button1.flag == 0) cnt ++;
        if(_button2.flag == 0) cnt ++;
        if(_button3.flag == 0) cnt ++;
        if(_button4.flag == 0) cnt ++;
        switch (cnt)
        {
            //0个零
            case 0:
                if(_button1.flag == _button2.flag)
                {
                    _button1.flag = _button1.flag + _button2.flag;
                    _button2.flag = _button3.flag;
                    _button3.flag = _button4.flag;
                    _button4.flag = 0;
                }
                
                if(_button2.flag == _button3.flag)
                {
                    _button1.flag = _button1.flag;
                    _button2.flag = _button2.flag + _button3.flag;
                    _button3.flag = _button4.flag;
                    _button4.flag = 0;
                }
                
                if(_button3.flag == _button4.flag)
                {
                    _button1.flag = _button1.flag;
                    _button2.flag = _button2.flag;
                    _button3.flag = _button3.flag + _button4.flag;
                    _button4.flag = 0;
                }
                break;
            //1个零
            case 1:
                //第一个数是0
                if(_button1.flag == 0)
                {
                    if(_button2.flag == _button3.flag)
                    {
                        _button1.flag = _button2.flag + _button3.flag;
                        _button2.flag = _button4.flag;
                        _button3.flag = 0;
                        _button4.flag = 0;
                    }
                    else if(_button3.flag == _button4.flag)
                    {
                        _button1.flag = _button2.flag;
                        _button2.flag = _button3.flag + _button4.flag;
                        _button3.flag = 0;
                        _button4.flag = 0;
                    }
                    else
                    {
                        _button1.flag = _button2.flag;
                        _button2.flag = _button3.flag;
                        _button3.flag = _button4.flag;
                        _button4.flag = 0;
                    }
                
                }
                //第二个数是0
                else if(_button2.flag == 0)
                {
                    if(_button1.flag == _button3.flag)
                    {
                        _button1.flag = _button1.flag + _button3.flag;
                        _button2.flag = _button4.flag;
                        _button3.flag = 0;
                        _button4.flag = 0;
                    }
                    else if(_button3.flag == _button4.flag)
                    {
                        _button1.flag = _button1.flag;
                        _button2.flag = _button3.flag + _button4.flag;
                        _button3.flag = 0;
                        _button4.flag = 0;
                    }
                    else
                    {
                        _button1.flag = _button1.flag;
                        _button2.flag = _button3.flag;
                        _button3.flag = _button4.flag;
                        _button4.flag = 0;
                    }
                }
                //第三个数是0
                else if(_button3.flag == 0)
                {
                    if(_button1.flag == _button2.flag)
                    {
                        _button1.flag = _button1.flag + _button2.flag;
                        _button2.flag = _button4.flag;
                        _button3.flag = 0;
                        _button4.flag = 0;
                    }
                    else if(_button2.flag == _button4.flag)
                    {
                        _button1.flag = _button1.flag;
                        _button2.flag = _button2.flag + _button4.flag;
                        _button3.flag = 0;
                        _button4.flag = 0;
                    }
                    else
                    {
                        _button1.flag = _button1.flag;
                        _button2.flag = _button2.flag;
                        _button3.flag = _button4.flag;
                        _button4.flag = 0;
                    }
                }
                //第四个数是0
                else if(_button4.flag == 0)
                {
                    if(_button1.flag == _button2.flag)
                    {
                        _button1.flag = _button1.flag + _button2.flag;
                        _button2.flag = _button3.flag;
                        _button3.flag = 0;
                        _button4.flag = 0;
                    }
                    else if(_button2.flag == _button3.flag)
                    {
                        _button1.flag = _button1.flag;
                        _button2.flag = _button2.flag + _button3.flag;
                        _button3.flag = 0;
                        _button4.flag = 0;
                    }
                    else
                    {
                        _button1.flag = _button1.flag;
                        _button2.flag = _button2.flag;
                        _button3.flag = _button3.flag;
                        _button4.flag = 0;
                    }
                }
                break;
            //2个零
            case 2:
                if(_button1.flag == 0 && _button2.flag == 0)
                {
                    if(_button3.flag == _button4.flag)
                    {
                        _button1.flag = _button3.flag + _button4.flag;
                        _button2.flag = 0;
                        _button3.flag = 0;
                        _button4.flag = 0;
                    }
                    else
                    {
                        _button1.flag = _button3.flag;
                        _button2.flag = _button4.flag;
                        _button3.flag = 0;
                        _button4.flag = 0;
                    }
                }
                if(_button2.flag == 0 && _button3.flag == 0)
                {
                    if(_button1.flag == _button4.flag)
                    {
                        _button1.flag = _button1.flag + _button4.flag;
                        _button2.flag = 0;
                        _button3.flag = 0;
                        _button4.flag = 0;
                    }
                    else
                    {
                        _button1.flag = _button1.flag;
                        _button2.flag = _button4.flag;
                        _button3.flag = 0;
                        _button4.flag = 0;
                    }
                }
                if(_button3.flag == 0 && _button4.flag == 0)
                {
                    if(_button1.flag == _button2.flag)
                    {
                        _button1.flag = _button1.flag + _button2.flag;
                        _button2.flag = 0;
                        _button3.flag = 0;
                        _button4.flag = 0;
                    }
                    else
                    {
                        _button1.flag = _button1.flag;
                        _button2.flag = _button2.flag;
                        _button3.flag = 0;
                        _button4.flag = 0;
                    }
                }
                if(_button1.flag == 0 && _button3.flag == 0)
                {
                    if(_button2.flag == _button4.flag)
                    {
                        _button1.flag = _button2.flag + _button4.flag;
                        _button2.flag = 0;
                    }
                    else
                    {
                        _button1.flag = _button2.flag;
                        _button2.flag = _button4.flag;
                        _button3.flag = 0;
                        _button4.flag = 0;
                    }
                }
                if(_button2.flag == 0 && _button4.flag == 0)
                {
                    if(_button1.flag == _button3.flag)
                    {
                        _button1.flag = _button1.flag + _button3.flag;
                        _button2.flag = 0;
                        _button3.flag = 0;
                        _button4.flag = 0;
                    }
                    else
                    {
                        _button1.flag = _button1.flag;
                        _button2.flag = _button3.flag;
                        _button3.flag = 0;
                        _button4.flag = 0;
                    }
                }
                
                
                break;
            //3个零
            case 3:
                if(_button2.flag !=0)
                {
                    _button1.flag = _button2.flag;
                    _button2.flag = 0;
                }
                if(_button3.flag !=0)
                {
                    _button1.flag = _button3.flag;
                    _button3.flag = 0;
                }
                if(_button4.flag !=0)
                {
                    _button1.flag = _button4.flag;
                    _button4.flag = 0;
                }

                break;
            //4个零,不用处理
            case 4: break;
                
            default:break;
        }
        [self xianShi];

    }
