## Gitee的基本使用方法

##### 1. 进入官网，注册并登录

<img src="image\image-20221001103110403.png" alt="image-20221001103110403" style="zoom:50%;" />

![image-20221001103340807](image\image-20221001103340807.png)

##### 2. 新建仓库

<img src="image\image-20221001103727398.png" alt="image-20221001103727398" style="zoom:67%;" />

![image-20221001103833921](image\image-20221001103833921.png)

##### 3. 进入仓库，(设置开源)

![image-20221001104251133](image\image-20221001104251133.png)

![image-20221001104433675](image\image-20221001104433675.png)

##### 4. 本地配置

初次使用git前需要先配置好本地的git信息，其中包括用户名字信息（user.name） 和用户的邮箱（user. email），当我们向远程仓库提交代码时，通过这些配置信息区分不同的开发者，配置后可以无须再重复配置git的基本信息。

1. 鼠标右键，选择Git Bash Here
2. 输入命令

```
git config --global user.name "输入用户名称"
git config --global user.email "输入邮箱名xxx@xx.com"
```

![image-20221001104639860](image\image-20221001104639860.png)

##### 5. 本地仓库上传远端仓库

1. 在一文件夹内部右键，选择Git Bush Here

![image-20221001105340698](image\image-20221001105340698.png)

2. 官网复制地址

	![image-20221001105637320](image\image-20221001105637320.png)

3. 输入命令

	```
	git clone 复制的HTTPS
	```

<img src="image\image-20221001105940025.png" alt="image-20221001105940025" style="zoom:67%;" />

<img src="image\image-20221001110058729.png" alt="image-20221001110058729" style="zoom:80%;" />

4. 新建文件夹，进行项目开发

![image-20221001110239067](image\image-20221001110239067.png)

5. 上传仓库

![image-20221001110812990](image\image-20221001110812990.png)

```
git status                	// 查看修改项目 红色字体即为修改内容
// 更新到仓库
git add .
git commit -m "修改说明"
git push
```

##### 6. Git命令速查

![image-20221001104141516](image\image-20221001104141516.png)