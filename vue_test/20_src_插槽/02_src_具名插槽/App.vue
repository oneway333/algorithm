<template>
  <div class="container">
    <!-- 具名插槽用法 -->
    <Category title="fuck">
      <ul v-for="(i, index) of fuck" :key="index" slot="center">
        <li>{{ i }}</li>
      </ul>
      <div class="footer" slot="footer">
        <a href="javascript:;">fuck shit</a>
      </div>
    </Category>
    <Category title="shit">
      <img
        src="https://tbi.sb-cd.com/t/15624497/1/5/w:300/t6-enh/incredible-orgasm-maker-ava-ad.jpg"
        alt="fuck"
        slot="center"
      />
      <div class="footer" slot="footer">
        <a href="javascript:;">fuck you</a>
      </div>
    </Category>
    <Category title="damn">
      <video src="./source/124ac3.mp4" muted controls slot="center"></video>
      <div class="footer" slot="footer">
        <a href="javascript:;" >shit</a>
        <a href="javascript:;" >shit</a>
        <a href="javascript:;" >shit</a>
      </div>
      <h4 slot="footer">fuck you</h4>
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
    return {
      fuck: ["fuck1", "fuck2", "fuck3", "fuck4"],
      shit: ["shit1", "shit2", "shit3", "shit4"],
      damn: ["damn1", "damn2", "damn3", "damn4"],
    };
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
h4{
  text-align: center;
}
</style>