# DesignPatterns
学习目的：学习设计模式，基于C++语言

# 9.20  
增加工厂模式 定义一个创建对象的接口，让其子类自己决定实例化哪一个工厂类，工厂模式使其创建过程延迟到子类进行。  
![Image text](https://github.com/lingaojun/DesignPatterns/blob/master/FactoryMode/FactoryPattermUML.png)  
增加策略模式 定义一系列的算法,把它们一个个封装起来, 并且使它们可相互替换。  
# 9.22  
增加观察者模式 用于一对多进行通知  

![Image text](https://github.com/lingaojun/DesignPatterns/blob/master/ObserverPattern/ObserverPattern.png)  

增加装饰者模式 通过继承和委托同一个类的方式，实现对基类的接口的引用和补充，并且接口名字保持不变，相当于增加接口功能。    
![Image text](https://github.com/lingaojun/DesignPatterns/blob/master/DecoratorPattern/DecoratorPattern.png)
# 9.23
增加桥模式: 将业务抽象（手机，电脑，pad）与平台实现（登录，注册）分开，通过组合委托的方式，进行抽象与实现的组合。  
![Image text](https://github.com/lingaojun/DesignPatterns/blob/master/BridgePattern/BridgePattern.png)
# 9.24  
增加抽象工厂模式：为工厂模式的扩张版，当有多个工厂需要创建时则需要继承同一个基类，上层实现与工厂模式类似。  
# 9.28  
增加原型模式：模拟浅拷贝的方式克隆一份当前对象。在实际项目中，原型模式很少单独出现，一般是和工厂方法模式一起出现，通过 clone 的方法创建一个对象，然后由工厂方法提供给调用者。  

![Image text](https://github.com/lingaojun/DesignPatterns/blob/master/PrototypePattern/PrototypePattern.png)  

增加CI编译脚本，使用方式：将该脚本放在与模式文件夹同层次的路径下。   
# ./allmake.sh 即可编译所有源码。  
# ./allmake.sh clean 清除所有编译生成的二进制文件。  
# 10.10  
增加适配者模式：通过适配的类进行被适配接口的二次封装，达到通过调用适配器类的接口进而调用被适配器的接口。从而使两个不匹配的接口进行一起工作。   
![Image text](https://github.com/lingaojun/DesignPatterns/blob/master/AdapterPattern/AdapterPattern.png)

