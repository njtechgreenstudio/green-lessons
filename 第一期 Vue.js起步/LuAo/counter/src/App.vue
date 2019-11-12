<template>
  <el-col>
    <!-- 方案1 -->
    <el-row>
      <el-tag class="title">方案1</el-tag>
      <el-row>
        <el-col span="2">
          <el-input v-model="counter"></el-input>
        </el-col>
        <el-button @click="onMinusClick" type="primary" class="button">-</el-button>
        <el-button @click="onPlusClick" type="primary" class="button">+</el-button>
      </el-row>
    </el-row>
    <!-- 方案2 -->
    <el-row>
      <el-tag class="title">方案2</el-tag>
      <el-row>
        <el-input-number v-model="number"></el-input-number>
      </el-row>
    </el-row>
  </el-col>
</template>

<script>
export default {
  data() {
    return {
      counter: 0,
      number: 0
    };
  },
  methods: {
    onMinusClick() {
      this.counter--;
    },
    onPlusClick() {
      this.counter++;
    }
  }
};
</script>

<style scoped>
.title {
  margin-top: 0.5rem;
  margin-bottom: 0.5rem;
}
.button {
  margin-left: 0.5rem;
}
</style>
