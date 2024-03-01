<template>
  <div class="container">
    <!-- 具名插槽用法 -->
    <Category title="fuck">
      <template scope="fuck">
        <ul>
          <!-- 原来是我一直用错地方了。。。哈哈哈哈哈哈 -->
          <li v-for="(i, index) of fuck.fuck" :key="index">{{ i }}</li>
        </ul>
      </template>
      <div class="footer">
        <a href="javascript:;">fuck shit</a>
      </div>
    </Category>
    <Category title="fuck">
      <template scope="fuck">
        <ol>
          <li v-for="(i, index) of fuck.fuck" :key="index">{{ i }}</li>
        </ol>
      </template>
      <div class="footer">
        <a href="javascript:;">fuck shit</a>
      </div>
    </Category>
    <Category title="fuck">
      <template scope="fuck">
        <!-- 原来还可以这么用 -->
        <h4 v-for="(i, index) of fuck.fuck" :key="index">{{ i }}</h4>
      </template>

      <div class="footer">
        <a href="javascript:;">fuck shit</a>
      </div>
    </Category>
  </div>
</template>

<script>
import Category from "./components/Category.vue";

export default {
  name: "App",
  components: {
    Category,
  },
  data() {
    return {};
  },
};
</script>

<style>
.container {
  display: flex;
  justify-content: space-evenly;
}
.footer {
  display: flex;
  justify-content: space-around;
}
h4 {
  text-align: center;
}
</style>