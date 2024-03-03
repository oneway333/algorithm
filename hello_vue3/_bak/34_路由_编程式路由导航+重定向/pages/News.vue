<template>
  <div class="news">
    <ul>
      <li v-for="n of newsList" :key="n.id">
        <button @click="show(n)">fuck</button>
        <!-- query参数 -->
        <!-- <RouterLink :to="`/news/detail?id=${n.id}&title=${n.title}&content=${n.content}`">{{n.title}}</RouterLink> -->
        <!-- <RouterLink :to="{
          name: 'detail',
          query: {
            id: n.id,
            title: n.title,
            content: n.content,
          }
        }">{{n.title}}</RouterLink> -->

        <!-- params参数 -->
        <!-- <RouterLink :to="`/news/detail/${n.id}/${n.title}/${n.content}`">{{n.title}}</RouterLink> -->
        <RouterLink :to="{
        name: 'detail',
        params: {
          id: n.id,
          title: n.title,
          content: n.content,
        }
      }">{{ n.title }}</RouterLink>

      </li>
    </ul>
    <div class="news-content">
      <RouterView></RouterView>
    </div>

  </div>
</template>

<script setup lang="ts" name="News">
import { reactive } from 'vue';
import { useRoute, type RouterLink, type RouterView, useRouter } from 'vue-router';

const router = useRouter()
const newsList = reactive([
  { id: '1', title: 'fuck1', content: 'shit1' },
  { id: '2', title: 'fuck2', content: 'shit2' },
  { id: '3', title: 'fuck3', content: 'shit3' },
  { id: '4', title: 'fuck4', content: 'shit4' },
])

interface NewsDetail {
  id: string,
  title: string,
  content: string,
}


function show(n: NewsDetail) {
  router.push({
    name: 'detail',
    params: {
      id: n.id,
      title: n.title,
      content: n.content,

    }
  })
}

</script>

<style scoped>
/* 新闻 */
.news {
  padding: 0 20px;
  display: flex;
  justify-content: space-between;
  height: 100%;
}

.news ul {
  margin-top: 30px;
  list-style: none;
  padding-left: 10px;
}

.news li>a {
  font-size: 18px;
  line-height: 40px;
  text-decoration: none;
  color: #64967E;
  text-shadow: 0 0 1px rgb(0, 84, 0);
}

.news-content {
  width: 70%;
  height: 90%;
  border: 1px solid;
  margin-top: 20px;
  border-radius: 10px;
}
</style>