package com.oneway.blog.api;

import com.oneway.blog.service.ArticleService;
import com.oneway.blog.vo.ArticleVo;
import com.oneway.blog.vo.Result;
import com.oneway.blog.vo.params.PageParams;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.*;

import java.util.List;


@RestController
@RequestMapping("articles")
public class ArticleController {

    @Autowired
    private ArticleService articleService;

    // Result是统一结果返回
    @PostMapping
    public Result articles(@RequestBody PageParams pageParams) {

       // ArticleVo 页面接收到的数据
        List<ArticleVo> articles = articleService.listArticlesPage(pageParams);

        return Result.success(articles);
    }

}
