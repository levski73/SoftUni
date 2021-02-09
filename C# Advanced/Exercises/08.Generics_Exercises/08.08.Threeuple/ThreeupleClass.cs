﻿
namespace Threeuple
{
    public class Threeuple<T1, T2, T3>
    {
        public Threeuple()
        {
        }
        public Threeuple(T1 item1, T2 item2, T3 item3)
        {
            this.item1 = item1;
            this.item2 = item2;
            this.item3 = item3;
        }

        public T1 item1 { get; set; }
        public T2 item2 { get; set; }
        public T3 item3 { get; set; }
        public string[] ToStringArray()
        {
            string[]retArr= new string[3];
            retArr[0] = item1.ToString();
            retArr[1] = item2.ToString();
            retArr[2] = item3.ToString();

            return retArr;
        }
    }
}
