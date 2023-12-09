package com.oneway.blog.service;

import com.oneway.blog.vo.ArticleVo;
import com.oneway.blog.vo.Result;
import com.oneway.blog.vo.params.PageParams;

import java.util.List;

public interface ArticleService {
    List<ArticleVo> listArticlesPage(PageParams pageParams);

    // 分页查询文章列表
    Result listArticle(PageParams pageParams);
}
