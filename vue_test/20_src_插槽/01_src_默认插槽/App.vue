<template>
  <div class="container">
    <Category title="fuck">
      <ul v-for="(i, index) of fuck" :key="index">
        <li>{{ i }}</li>
      </ul>
    </Category>
    <Category title="shit">
      <img
        src="https://tbi.sb-cd.com/t/15624497/1/5/w:300/t6-enh/incredible-orgasm-maker-ava-ad.jpg"
        alt=""
      />
    </Category>
    <Category title="damn">
      <video src="" muted controls></video>
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
</style>