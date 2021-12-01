## Welcome to GitHub Pages

You can use the [editor on GitHub](https://github.com/venkatasaikonni/Subof-matrices/edit/main/docs/index.md) to maintain and preview the content for your website in Markdown files.

Whenever you commit to this repository, GitHub Pages will run [Jekyll](https://jekyllrb.com/) to rebuild the pages in your site, from the content in your Markdown files.

### Markdown

Markdown is a lightweight and easy-to-use syntax for styling your writing. It includes conventions for

```markdown
Syntax highlighted code block

ht#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int r1,c1,r2,c2,i,j;
	printf("Enter row and column of matrix A");
	scanf("%d%d",&r1,&c1);
	printf("Enter row and column of matrix B");
	scanf("%d%d",&r2,&c2);
	if(r1<1 || r2<1 || r1>10 || r2>10 || c1<1 || c2<1 || c1>10 || c2>10)
		printf("Row or column is out of range");
	else if(r1!=r2 || c1!=c2)
		printf("Subtraction is not possible");
	else
	{
		printf("Enter %d no of elements of matrix A ",r1*c1);
		for(i=0;i<r1;i++)
			for(j=0;j<c1;j++)
				scanf("%d",&a[i][j]);
		printf("Enter %d no. of elements of matrix B",r2*c2);
		for(i=0;i<r2;i++)
			for(j=0;j<c2;j++)
				scanf("%d",&b[i][j]);
		for(i=0;i<r1;i++)
			for(j=0;j<c2;j++)
				c[i][j]=a[i][j]-b[i][j];
		printf("Subtraction of two matrices is \n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c1;j++)
				printf("%d ",c[i][j]);
			printf("\n");
		}		
	}
}
#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int r1,c1,r2,c2,i,j;
	printf("Enter row and column of matrix A");
	scanf("%d%d",&r1,&c1);
	printf("Enter row and column of matrix B");
	scanf("%d%d",&r2,&c2);
	if(r1<1 || r2<1 || r1>10 || r2>10 || c1<1 || c2<1 || c1>10 || c2>10)
		printf("Row or column is out of range");
	else if(r1!=r2 || c1!=c2)
		printf("Subtraction is not possible");
	else
	{
		printf("Enter %d no of elements of matrix A ",r1*c1);
		for(i=0;i<r1;i++)
			for(j=0;j<c1;j++)
				scanf("%d",&a[i][j]);
		printf("Enter %d no. of elements of matrix B",r2*c2);
		for(i=0;i<r2;i++)
			for(j=0;j<c2;j++)
				scanf("%d",&b[i][j]);
		for(i=0;i<r1;i++)
			for(j=0;j<c2;j++)
				c[i][j]=a[i][j]-b[i][j];
		printf("Subtraction of two matrices is \n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c1;j++)
				printf("%d ",c[i][j]);
			printf("\n");
		}		
	}
}

- Bulleted
- List

1. Numbered
2. List

**Bold** and _Italic_ and `Code` text

[Link](url) and ![Image](src)
```

For more details see [Basic writing and formatting syntax](https://docs.github.com/en/github/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax).

### Jekyll Themes

Your Pages site will use the layout and styles from the Jekyll theme you have selected in your [repository settings](https://github.com/venkatasaikonni/Subof-matrices/settings/pages). The name of this theme is saved in the Jekyll `_config.yml` configuration file.

### Support or Contact

Having trouble with Pages? Check out our [documentation](https://docs.github.com/categories/github-pages-basics/) or [contact support](https://support.github.com/contact) and we’ll help you sort it out.
